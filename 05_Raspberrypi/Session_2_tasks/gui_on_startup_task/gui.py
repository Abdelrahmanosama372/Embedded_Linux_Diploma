import tkinter as tk

root = tk.Tk()  # create the Tk window like you normally do
root.geometry("400x240")
root.title("gui")

button = tk.Button(root, text="hello")
button.place(relx=0.5, rely=0.5, anchor=tk.CENTER,width=150, height=40)

root.mainloop()

