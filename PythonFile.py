import tkinter as tk
import tkinter.ttk
import time as tm
import tkinter.messagebox


class Mproject():

    def __init__(self):

        self.window = tk.Tk()
        self.window.title('TRANSACTION CLEARER')
        self.window.geometry('500x600+500+300')
        self.window.config(background = '#FFFAF0')
        #self.window.resizable(False, False)

        self.entries = []
        self.item = []

        # Variable
        self.check = False
        self.searchVar = float(0)

        #self.addbtnVar = tk.BooleanVar()
        #self.delbtnVar = tk.BooleanVar()
        self.Amount_Slot = 1

        # Frame
        self.topFrame = tk.Frame(self.window)
        self.topFrame.pack(fill = 'x')

        ###################################################-----Main Frame & SCROLLBAR IN MAIN FRAME-----###################################################
        self.mainFrame = tk.Frame(self.window, width = 100, height = 280)
        self.mainFrame.pack(fill = 'x')

        self.myframe = tk.Frame(self.mainFrame, width = 100, height = 100, bd = 1)
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

        ###################################################-----result Frame & SCROLLBAR IN result FRAME-----###################################################
        self.resultFrame = tk.Frame(self.window, width = 100, height = 280)
        self.resultFrame.pack(fill = 'x')

        self.myrResultframe = tk.Frame(self.resultFrame, width = 100, height = 100, bd=1)
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

        self.lblTitle = tk.Label(self.topFrame, text = 'TRANSACTION CLEARER', font = ('defule',30,'bold'))
        self.lblTitle.pack()

        self.lblsearch = tk.Label(self.search_Frame, text = 'Search', bg = '#FFFAF0', textvariable = self.searchVar)
        self.lblsearch.pack(side = 'left')

        self.inpSearch = tk.Entry(self.search_Frame, width = '20')
        self.inpSearch.pack(side = 'left')


        self.AddSlot_Feature()

        self.btnAdd = tk.Button(self.bottomFrame, text = 'Add', command = self.AddSlot_Feature, width = '10', height = '2')
        #self.btnAdd.bind("<Button-1>", self.AddSlot_Feature)
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


        if self.Amount_Slot < 10:
            self.Amount_Slot += 1   

            for i in range(self.Amount_Slot):

                self.lblname = tk.Label(self.frame, text = ('Slot', i + 1 , ':') )
                self.lblname.grid(row = i, column = 0)

                self.inputName = tk.Entry(self.frame, width = '20')
                self.inputName.grid(row = i, column = 1)

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


        if self.inpSearch.get() != '':
            self.searchVar = float(self.inpSearch.get())
        else:
            tk.messagebox.showwarning("Warning", 'Please enter Number in Search slot')
        
            
        self.lblTotlaAmount = tk.Label(self.Result_frame, text = (f"Total Amount: {sum(self.item)}"))
        self.lblTotlaAmount.pack()
        
        self.con0()
        self.con1()
        self.con2()
        self.con3()
        self.con4()
        self.con5()
        self.con6()
        self.con7()
        self.con8()
        self.con9()
        self.con10()
        self.con11()
        self.con12()
        self.con13()
        self.con14()
        self.con15()
        #self.con16()
        #self.con17()
        #self.con18()
        #self.con19()
        #self.con20()
        
        if self.check == False:
            self.lblNoRE = tk.Message(self.Result_frame, text = 'No data was found! ', width = 450)
            self.lblNoRE.pack()


        # Clear Data
        self.item.clear()
        self.searchVar = 0
        self.check = False

# Condition       
    def con0(self):
        if int(sum(self.item)) == int(self.searchVar): 
            self.lbl_con0 = tk.Message(self.Result_frame, text = (f"All the deta is corresponding sum and the data."), width = 450)
            self.lbl_con0.pack()
            self.check = True

    def con1(self):
        for i in range((self.Amount_Slot - 1)):
            for j in range((self.Amount_Slot)):
                if int(self.item[i] + self.item[j]) == int(self.searchVar):
                    self.MesCon1 = tk.Message(self.Result_frame, text = (f"The data is in slot {i+1} and slot {j+1} which has value {self.item[i]} ,{self.item[j]}"), width = 450)
                    self.MesCon1.pack()
                    self.check = True
                    
    def con2(self):
        for i in range(self.Amount_Slot - 2):
            for j in range(self.Amount_Slot - 1):
                for k in range(self.Amount_Slot):
                    if int(self.item[i] + self.item[j] + self.item[k] ) == int(self.searchVar):
                        self.MesCon2 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1} and slot {k + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}"), width = 450)
                        self.MesCon2.pack()
                        self.check = True

    def con3(self):
        for i in range(self.Amount_Slot - 3):
            for j in range(self.Amount_Slot - 2):
                for k in range(self.Amount_Slot - 1):
                    for l in range(self.Amount_Slot):
                        if int(self.item[i] + self.item[j] + self.item[k] + self.item[l]) == int(self.searchVar):
                            self.MesCon3 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1},slot {k + 1} and slot {l + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}"), width = 450)
                            self.MesCon3.pack()
                            self.check = True

    def con4(self):
        for i in range(self.Amount_Slot - 4):
            for j in range(self.Amount_Slot - 3):
                for k in range(self.Amount_Slot - 3):
                    for l in range(self.Amount_Slot -1):
                        for m in range(self.Amount_Slot):
                            if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m]) == int(self.searchVar):
                                self.MesCon4 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1} and slot {m + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]},{self.item[m]}"), width = 450)
                                self.MesCon4.pack()
                                self.check = True

    def con5(self):
        for i in range(self.Amount_Slot - 5):
            for j in range(self.Amount_Slot - 4):
                for k in range(self.Amount_Slot - 3):
                    for l in range(self.Amount_Slot - 2):
                        for m in range(self.Amount_Slot - 1):
                            for n in range(self.Amount_Slot):
                                if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m]+ self.item[n]) == int(self.searchVar):
                                    self.MesCon5 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1} and slot {n + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}"), width = 450)
                                    self.MesCon5.pack()
                                    self.check = True
                    
    def con6(self):
        for i in range(self.Amount_Slot - 6):
            for j in range(self.Amount_Slot - 5):
                for k in range(self.Amount_Slot - 4):
                    for l in range(self.Amount_Slot - 3):
                        for m in range(self.Amount_Slot - 2):
                            for n in range(self.Amount_Slot - 1):
                                for o in range(self.Amount_Slot):
                                    if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o]) == int(self.searchVar):
                                        self.MesCon6 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1} and slot {o + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}"), width = 450)
                                        self.MesCon6.pack()
                                        self.check = True
    def con7(self):
        for i in range(self.Amount_Slot - 7):
            for j in range(self.Amount_Slot - 6):
                for k in range(self.Amount_Slot - 5):
                    for l in range(self.Amount_Slot - 4):
                        for m in range(self.Amount_Slot - 3):
                            for n in range(self.Amount_Slot - 2):
                                for o in range(self.Amount_Slot - 1):
                                    for p in range(self.Amount_Slot):
                                        if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p]) == int(self.searchVar):
                                            self.MesCon7 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1} and slot {p + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}"), width = 450)
                                            self.MesCon7.pack()
                                            self.check = True

    def con8(self):
        for i in range(self.Amount_Slot - 8):
            for j in range(self.Amount_Slot - 7):
                for k in range(self.Amount_Slot - 6):
                    for l in range(self.Amount_Slot - 5):
                        for m in range(self.Amount_Slot - 4):
                            for n in range(self.Amount_Slot - 3):
                                for o in range(self.Amount_Slot - 2):
                                    for p in range(self.Amount_Slot - 1):
                                        for  q in range(self.Amount_Slot):
                                            if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q]) == int(self.searchVar):
                                                self.MesCon8 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1} and slot {q + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}"), width = 450)
                                                self.MesCon8.pack()
                                                self.check = True
    def con9(self):
        for i in range(self.Amount_Slot - 9):
            for j in range(self.Amount_Slot - 8):
                for k in range(self.Amount_Slot - 7):
                    for l in range(self.Amount_Slot - 6):
                        for m in range(self.Amount_Slot - 5):
                            for n in range(self.Amount_Slot - 4):
                                for o in range(self.Amount_Slot - 3):
                                    for p in range(self.Amount_Slot - 2):
                                        for  q in range(self.Amount_Slot - 1):
                                            for r in range(self.Amount_Slot):
                                                if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r]) == int(self.searchVar):
                                                    self.MesCon9 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1} and slot {r + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}"), width = 450)
                                                    self.MesCon9.pack()
                                                    self.check = True
    def con10(self):
        for i in range(self.Amount_Slot - 10):
            for j in range(self.Amount_Slot - 9):
                for k in range(self.Amount_Slot - 8):
                    for l in range(self.Amount_Slot - 7):
                        for m in range(self.Amount_Slot - 6):
                            for n in range(self.Amount_Slot - 5):
                                for o in range(self.Amount_Slot - 4):
                                    for p in range(self.Amount_Slot - 3):
                                        for  q in range(self.Amount_Slot - 2):
                                            for r in range(self.Amount_Slot - 1):
                                                for s in range(self.Amount_Slot):
                                                    if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s]) == int(self.searchVar):
                                                        self.MesCon10 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1} and slot {s + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}"), width = 450)
                                                        self.MesCon10.pack()
                                                        self.check = True

    def con11(self):
        for i in range(self.Amount_Slot - 11):
            for j in range(self.Amount_Slot - 10):
                for k in range(self.Amount_Slot - 9):
                    for l in range(self.Amount_Slot - 8):
                        for m in range(self.Amount_Slot - 7):
                            for n in range(self.Amount_Slot - 6):
                                for o in range(self.Amount_Slot - 5):
                                    for p in range(self.Amount_Slot - 4):
                                        for  q in range(self.Amount_Slot - 3):
                                            for r in range(self.Amount_Slot - 2):
                                                for s in range(self.Amount_Slot - 1):
                                                    for t in range(self.Amount_Slot):
                                                        if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t]) == int(self.searchVar):
                                                            self.MesCon11 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1} and slot {t + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]} {self.item[t]}"), width = 450)
                                                            self.MesCon11.pack()
                                                            self.check = True

    def con12(self):
        for i in range(self.Amount_Slot - 12):
            for j in range(self.Amount_Slot - 11):
                for k in range(self.Amount_Slot - 10):
                    for l in range(self.Amount_Slot - 9):
                        for m in range(self.Amount_Slot - 8):
                            for n in range(self.Amount_Slot - 7):
                                for o in range(self.Amount_Slot - 6):
                                    for p in range(self.Amount_Slot - 5):
                                        for  q in range(self.Amount_Slot - 4):
                                            for r in range(self.Amount_Slot - 3):
                                                for s in range(self.Amount_Slot - 2):
                                                    for t in range(self.Amount_Slot - 1):
                                                        for u in range(self.Amount_Slot):
                                                            if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t]+ self.item[u]) == int(self.searchVar):
                                                                self.MesCon12 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, and slot {u + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}"), width = 450)
                                                                self.MesCon12.pack()
                                                                self.check = True

    def con13(self):
        for i in range(self.Amount_Slot - 13):
            for j in range(self.Amount_Slot - 12):
                for k in range(self.Amount_Slot - 11):
                    for l in range(self.Amount_Slot - 10):
                        for m in range(self.Amount_Slot - 9):
                            for n in range(self.Amount_Slot - 8):
                                for o in range(self.Amount_Slot - 7):
                                    for p in range(self.Amount_Slot - 6):
                                        for  q in range(self.Amount_Slot - 5):
                                            for r in range(self.Amount_Slot - 4):
                                                for s in range(self.Amount_Slot - 3):
                                                    for t in range(self.Amount_Slot - 2):
                                                        for u in range(self.Amount_Slot - 1):
                                                            for v in range(self.Amount_Slot):
                                                                if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v]) == int(self.searchVar):
                                                                    self.MesCon13 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1} and slot {v + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}"), width = 450)
                                                                    self.MesCon13.pack()
                                                                    self.check = True

    def con14(self):
        for i in range(self.Amount_Slot - 14):
            for j in range(self.Amount_Slot - 13):
                for k in range(self.Amount_Slot - 12):
                    for l in range(self.Amount_Slot - 11):
                        for m in range(self.Amount_Slot - 10):
                            for n in range(self.Amount_Slot - 9):
                                for o in range(self.Amount_Slot - 8):
                                    for p in range(self.Amount_Slot - 7):
                                        for  q in range(self.Amount_Slot - 6):
                                            for r in range(self.Amount_Slot - 5):
                                                for s in range(self.Amount_Slot - 4):
                                                    for t in range(self.Amount_Slot - 3):
                                                        for u in range(self.Amount_Slot - 2):
                                                            for v in range(self.Amount_Slot - 1):
                                                                for w in range(self.Amount_Slot):
                                                                    if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w]) == int(self.searchVar):
                                                                        self.MesCon14 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1} and slot {w + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}"), width = 450)
                                                                        self.MesCon14.pack()
                                                                        self.check = True

    def con15(self):
        for i in range(self.Amount_Slot - 15):
            for j in range(self.Amount_Slot - 14):
                for k in range(self.Amount_Slot - 13):
                    for l in range(self.Amount_Slot - 12):
                        for m in range(self.Amount_Slot - 11):
                            for n in range(self.Amount_Slot - 10):
                                for o in range(self.Amount_Slot - 9):
                                    for p in range(self.Amount_Slot - 8):
                                        for q in range(self.Amount_Slot - 7):
                                            for r in range(self.Amount_Slot - 6):
                                                for s in range(self.Amount_Slot - 5):
                                                    for t in range(self.Amount_Slot - 4):
                                                        for u in range(self.Amount_Slot - 3):
                                                            for v in range(self.Amount_Slot - 2):
                                                                for w in range(self.Amount_Slot - 1):
                                                                    for x in range(self.Amount_Slot):
                                                                        if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x]) == int(self.searchVar):
                                                                            self.MesCon15 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1} and slot {x + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}"), width = 450)
                                                                            self.MesCon15.pack()
                                                                            self.check = True
'''
    def con16(self):
        for i in range(self.Amount_Slot - 16):
            for j in range(self.Amount_Slot - 15):
                for k in range(self.Amount_Slot - 14):
                    for l in range(self.Amount_Slot - 13):
                        for m in range(self.Amount_Slot - 12):
                            for n in range(self.Amount_Slot - 11):
                                for o in range(self.Amount_Slot - 10):
                                    for p in range(self.Amount_Slot - 9):
                                        for q in range(self.Amount_Slot - 8):
                                            for r in range(self.Amount_Slot - 7):
                                                for s in range(self.Amount_Slot - 6):
                                                    for t in range(self.Amount_Slot - 5):
                                                        for u in range(self.Amount_Slot - 4):
                                                            for v in range(self.Amount_Slot - 3):
                                                                for w in range(self.Amount_Slot - 2):
                                                                    for x in range(self.Amount_Slot - 1):
                                                                        for y in range(self.Amount_Slot):
                                                                            if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x] + self.item[y]) == int(self.searchVar):
                                                                                self.MesCon16 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1}, slot {x + 1} and slot {y + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}, {self.item[y]}"), width = 450)
                                                                                self.MesCon16.pack()
                                                                                self.check = True

    def con17(self):
        for i in range(self.Amount_Slot - 17):
            for j in range(self.Amount_Slot - 16):
                for k in range(self.Amount_Slot - 15):
                    for l in range(self.Amount_Slot - 14):
                        for m in range(self.Amount_Slot - 13):
                            for n in range(self.Amount_Slot - 12):
                                for o in range(self.Amount_Slot - 11):
                                    for p in range(self.Amount_Slot - 10):
                                        for  q in range(self.Amount_Slot - 9):
                                            for r in range(self.Amount_Slot - 8):
                                                for s in range(self.Amount_Slot - 7):
                                                    for t in range(self.Amount_Slot - 6):
                                                        for u in range(self.Amount_Slot - 5):
                                                            for v in range(self.Amount_Slot - 4):
                                                                for w in range(self.Amount_Slot - 3):
                                                                    for x in range(self.Amount_Slot - 2):
                                                                        for y in range(self.Amount_Slot - 1):
                                                                            for z in range(self.Amount_Slot):
                                                                                if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x] + self.item[y] + self.item[z]) == int(self.searchVar):
                                                                                    self.MesCon17 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1}, slot {x + 1}, slot {y + 1} and slot {z + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}, {self.item[y]}, {self.item[z]}"), width = 450)
                                                                                    self.MesCon17.pack()
                                                                                    self.check = True

    def con18(self):
        for i in range(self.Amount_Slot - 18):
            for j in range(self.Amount_Slot - 17):
                for k in range(self.Amount_Slot - 16):
                    for l in range(self.Amount_Slot - 15):
                        for m in range(self.Amount_Slot - 14):
                            for n in range(self.Amount_Slot - 13):
                                for o in range(self.Amount_Slot - 12):
                                    for p in range(self.Amount_Slot - 11):
                                        for q in range(self.Amount_Slot - 10):
                                            for r in range(self.Amount_Slot - 9):
                                                for s in range(self.Amount_Slot - 8):
                                                    for t in range(self.Amount_Slot - 7):
                                                        for u in range(self.Amount_Slot - 6):
                                                            for v in range(self.Amount_Slot - 5):
                                                                for w in range(self.Amount_Slot - 4):
                                                                    for x in range(self.Amount_Slot - 3):
                                                                        for y in range(self.Amount_Slot - 2):
                                                                            for z in range(self.Amount_Slot - 1):
                                                                                for a in range(self.Amount_Slot):
                                                                                    if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x] + self.item[y] + self.item[z] + self.item[a]) == int(self.searchVar):
                                                                                        self.MesCon18 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1}, slot {x + 1}, slot {y + 1}, slot {z + 1} and slot {a + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}, {self.item[y]}, {self.item[z]}, {self.item[a]}"), width = 450)
                                                                                        self.MesCon18.pack()
                                                                                        self.check = True

    def con19(self):
        for i in range(self.Amount_Slot - 19):
            for j in range(self.Amount_Slot - 18):
                for k in range(self.Amount_Slot - 17):
                    for l in range(self.Amount_Slot - 16):
                        for m in range(self.Amount_Slot - 15):
                            for n in range(self.Amount_Slot - 14):
                                for o in range(self.Amount_Slot - 13):
                                    for p in range(self.Amount_Slot - 12):
                                        for  q in range(self.Amount_Slot - 11):
                                            for r in range(self.Amount_Slot - 10):
                                                for s in range(self.Amount_Slot - 9):
                                                    for t in range(self.Amount_Slot - 8):
                                                        for u in range(self.Amount_Slot - 7):
                                                            for v in range(self.Amount_Slot - 6):
                                                                for w in range(self.Amount_Slot - 5):
                                                                    for x in range(self.Amount_Slot - 4):
                                                                        for y in range(self.Amount_Slot - 3):
                                                                            for z in range(self.Amount_Slot - 2):
                                                                                for a in range(self.Amount_Slot - 1):
                                                                                    for b in range(self.Amount_Slot):
                                                                                        if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x] + self.item[y] + self.item[z] + self.item[a] + self.item[b]) == int(self.searchVar):
                                                                                            self.MesCon19 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1}, slot {x + 1}, slot {y + 1}, slot {z + 1}, slot {a + 1} and slot {b + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}, {self.item[y]}, {self.item[z]}, {self.item[a]}, {self.item[b]}"), width = 450)
                                                                                            self.MesCon19.pack()
                                                                                            self.check = True

    def con20(self):
        for i in range(self.Amount_Slot - 20):
            for j in range(self.Amount_Slot - 19):
                for k in range(self.Amount_Slot - 18):
                    for l in range(self.Amount_Slot - 17):
                        for m in range(self.Amount_Slot - 16):
                            for n in range(self.Amount_Slot - 15):
                                for o in range(self.Amount_Slot - 14):
                                    for p in range(self.Amount_Slot - 13):
                                        for  q in range(self.Amount_Slot - 12):
                                            for r in range(self.Amount_Slot - 11):
                                                for s in range(self.Amount_Slot - 10):
                                                    for t in range(self.Amount_Slot - 9):
                                                        for u in range(self.Amount_Slot - 8):
                                                            for v in range(self.Amount_Slot - 7):
                                                                for w in range(self.Amount_Slot - 6):
                                                                    for x in range(self.Amount_Slot - 5):
                                                                        for y in range(self.Amount_Slot - 4):
                                                                            for z in range(self.Amount_Slot - 3):
                                                                                for a in range(self.Amount_Slot - 2):
                                                                                    for b in range(self.Amount_Slot - 1):
                                                                                        for c in range(self.Amount_Slot):
                                                                                            if int(self.item[i] + self.item[j] + self.item[k] + self.item[l] + self.item[m] + self.item[n] + self.item[o] + self.item[p] + self.item[q] + self.item[r] + self.item[s] + self.item[t] + self.item[u] + self.item[v] + self.item[w] + self.item[x] + self.item[y] + self.item[z] + self.item[a] + self.item[b] + self.item[c]) == int(self.searchVar):
                                                                                                self.MesCon20 = tk.Message(self.Result_frame, text = (f"The data is in slot {i + 1}, slot {j + 1}, slot {k + 1}, slot {l + 1}, slot {m + 1}, slot {n + 1}, slot {o + 1}, slot {p + 1}, slot {q + 1}, slot {r + 1}, slot {s + 1}, slot {t + 1}, slot {u + 1}, slot {v + 1}, slot {w + 1}, slot {x + 1}, slot {y + 1}, slot {z + 1}, slot {a + 1}, slot {b + 1} and slot {c + 1} which has value {self.item[i]} ,{self.item[j]}, {self.item[k]}, {self.item[l]}, {self.item[m]}, {self.item[n]}, {self.item[o]}, {self.item[p]}, {self.item[q]}, {self.item[r]}, {self.item[s]}, {self.item[t]}, {self.item[u]}, {self.item[v]}, {self.item[w]}, {self.item[x]}, {self.item[y]}, {self.item[z]}, {self.item[a]}, {self.item[b]}, {self.item[c]}"), width = 450)
                                                                                                self.MesCon20.pack()
                                                                                                self.check = True
'''
Mproject()