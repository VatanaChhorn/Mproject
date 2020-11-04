import tkinter as tk
import tkinter.ttk
import time as tm
import itertools
import tkinter.messagebox


class Mproject():

    def __init__(self):

        self.window = tk.Tk()
        self.window.title('TRANSACTION CLEARER')
        self.window.geometry('400x545+600+300')
        self.window.config(background = '#FFFAF0')
        self.window.resizable(False, False)


        self.entries = []
        self.item = []

        # Variable
        self.check = False
        self.searchVar = float(0)

        self.Amount_Slot = 1

        # Frame
        self.topFrame = tk.Frame(self.window)
        self.topFrame.pack(fill = 'x')
        self.topFrame.config(background = '#FFFAF0')

        ###################################################-----Main Frame & SCROLLBAR IN MAIN FRAME-----###################################################
        self.mainFrame = tk.Frame(self.window)
        self.mainFrame.pack(fill = 'x')

        self.myframe = tk.Frame(self.mainFrame, bd = 1)
        self.myframe.pack(fill = 'x')

        self.canvas = tk.Canvas(self.myframe)
        self.frame = tk.Frame(self.canvas)
        self.myscrollbar =tk.Scrollbar(self.myframe,orient="vertical",command=self.canvas.yview)
        self.canvas.configure(yscrollcommand = self.myscrollbar.set)

        self.myscrollbar.pack(side = "right",fill = "y")
        self.canvas.pack(fill = 'x')
        self.canvas.create_window((0,0),window = self.frame, anchor = 'nw')
        self.frame.bind("<Configure>", self.myfunction)
        ###################################################-----SCROLLBAR IN MAIN FRAME-----###################################################

        self.search_Frame = tk.Frame(self.window)
        self.search_Frame.pack( pady = '10')
        self.search_Frame.config(background = '#FFFAF0')

        ###################################################-----result Frame & SCROLLBAR IN result FRAME-----###################################################
        self.resultFrame = tk.Frame(self.window)
        self.resultFrame.pack(fill = 'x')

        self.myrResultframe = tk.Frame(self.resultFrame, bd=1)
        self.myrResultframe.pack(fill = 'x')

        self.canvas1 = tk.Canvas(self.myrResultframe)
        self.Result_frame = tk.Frame(self.canvas1)
        self.myscrollbar =tk.Scrollbar(self.myrResultframe,orient="vertical",command=self.canvas1.yview)
        self.canvas1.configure(yscrollcommand = self.myscrollbar.set)

        self.myscrollbar.pack(side = "right",fill = "y")
        self.canvas1.pack(fill = 'x')
        self.canvas1.create_window((0,0),window = self.Result_frame, anchor = 'nw')
        self.Result_frame.bind("<Configure>", self.myfunction1)
        ###################################################-----SCROLLBAR IN MAIN FRAME-----###################################################
               
        self.bottomFrame = tk.Frame(self.window)
        self.bottomFrame.pack( side = 'bottom')
        self.bottomFrame.config(background = '#FFFAF0')

        self.lblTitle = tk.Label(self.topFrame, text = 'TRANSACTION CLEARER', font = ('defule',30,'bold'), bg = '#FFFAF0')
        self.lblTitle.pack()

        self.lblsearch = tk.Label(self.search_Frame, text = 'Search', bg = '#FFFAF0', textvariable = self.searchVar)
        self.lblsearch.pack(side = 'left')

        self.inpSearch = tk.Entry(self.search_Frame, width = '20')
        self.inpSearch.pack(side = 'left')


        self.AddSlot_Feature()

        self.btnAdd = tk.Button(self.bottomFrame, text = 'Add', command = self.AddSlot_Feature, width = '10', height = '2')
        self.btnAdd.pack(side = 'right')

        self.btnDelete = tk.Button(self.bottomFrame, text = 'Reset', command = self.delSlot_Feature, width = '10', height = '2')
        self.btnDelete.pack(side = 'right')

        self.btnCalculate = tk.Button(self.bottomFrame, text = 'Calculate', command = self.Calculate, width = '10', height = '2')
        self.btnCalculate.pack(side = 'right')

        self.window.mainloop()

# Function for Scrollbar
    def myfunction(self, event):
        self.canvas.configure(scrollregion = self.canvas.bbox("all"),width=200,height=200)

    def myfunction1(self, event):
        self.canvas1.configure(scrollregion = self.canvas.bbox("all"),width=200,height=200)

# First-Slot
    def fistwidget_in_mainFrame(self):

        self.lblname = tk.Label(self.frame, text = ('Slot 1 :') )
        self.lblname.grid(row = 0, column = 0)
        
        
        self.inputName = tk.Entry(self.frame, width = '20')
        self.inputName.grid(row = 0, column = 1)


# AddSlot
    def AddSlot_Feature(self):
        
        print(self.Amount_Slot)  

        if self.Amount_Slot < 15:
            self.Amount_Slot += 1   

            for i in range(self.Amount_Slot):

                self.lblname = tk.Label(self.frame, text = ('Slot', i + 1 , ':') )
                self.lblname.grid(row = i, column = 0)

                self.inputName = tk.Entry(self.frame, width = '20')
                self.inputName.grid(row = i, column = 1)
                self.inputName.focus()

                self.entries.append(self.inputName)

        print(self.Amount_Slot) 
# Reset Interface
    def delSlot_Feature(self):
        
        self.window.destroy()
        self.__init__()


# Calculate
    def Calculate(self):
        # Clear 
        for widget in self.Result_frame.winfo_children():
            widget.destroy()

        for entry in self.entries:
            if entry.get()!= '':
                self.item.append(float(entry.get()))
        
        print(self.item)
        for i in range(self.Amount_Slot):
            print(self.item[i])


        self.lblTotlaAmount = tk.Label(self.Result_frame, text = (f"Total Amount: {sum(self.item)}"))
        self.lblTotlaAmount.pack()

        if self.inpSearch.get() != '':
            self.searchVar = float(self.inpSearch.get())
            self.condition()
        else:
            tk.messagebox.showwarning("Warning", 'Please enter Number in Search slot')
        
            
        
        
        
        

        if self.check == False:
            self.lblNoRE = tk.Message(self.Result_frame, text = 'No data was found! ', width = 540)
            self.lblNoRE.pack()


        # Clear Data
        self.item.clear()
        self.searchVar = 0
        self.check = False

    def condition(self):

        self.mesDisplayUpper = tk.Message(self.Result_frame, text = (f"All the data is corresponding sum and the data have :"), width = 540, justify = 'left')
        self.mesDisplayUpper.pack()

        if sum(self.item) == self.searchVar:
            self.mesTotal = tk.Message(self.Result_frame, text = (f"Sum of all slots equal to the search amount"), width = 540, justify = 'left')
            self.mesTotal.pack()
            self.check = True


        for a in range(len((self.item))):
            for b in itertools.combinations(self.item, a):
                if int(sum(b)) == int(self.searchVar):
                    self.mesDisplay = tk.Message(self.Result_frame, text = (f"Which has {b}"), width = 540, justify = 'left')
                    self.mesDisplay.pack()
                    self.check = True


Mproject()