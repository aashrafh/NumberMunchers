<p align="center">
  <a href="" rel="noopener">
 <img width=400px height=210px src="https://github.com/aashrafh/NumberMunchers/blob/master/demo/logo.png" alt="NumberMunchers logo"></a>
</p>

<p align="center">
  <a href="https://github.com/aashrafh/NumberMunchers/graphs/contributors" alt="Contributors">
        <img src="https://img.shields.io/github/contributors/aashrafh/NumberMunchers" /></a>
  
   <a href="https://github.com/aashrafh/NumberMunchers/issues" alt="Issues">
        <img src="https://img.shields.io/github/issues/aashrafh/NumberMunchers" /></a>
  
  <a href="https://github.com/aashrafh/NumberMunchers/network" alt="Forks">
        <img src="https://img.shields.io/github/forks/aashrafh/NumberMunchers" /></a>
        
  <a href="https://github.com/aashrafh/NumberMunchers/stargazers" alt="Stars">
        <img src="https://img.shields.io/github/stars/aashrafh/NumberMunchers" /></a>
        
  <a href="https://github.com/aashrafh/NumberMunchers/blob/master/LICENSE" alt="License">
        <img src="https://img.shields.io/github/license/aashrafh/NumberMunchers" /></a>
</p>

---

<p align="center"> 👦 One-Player Assembly 8086 inispired by the popular Number Munchers Game
    <br> 
</p>

## 📝 Table of Contents
- [About](#about)
- [Demo](#demo)
- [Install](#Install)
- [How To Play](#play)
- [Built Using](#tech)

## 🧐 About <a name = "about"></a>
```Number Munchers``` is an educational computer game for kids. The game randomly choose and a number between from 0 to 10 and asks you to choose all the multiple of that number.

The rules are very simple: 
* You have 3 lives, each wrong choice your lives will be decreased.
* You have 1 minutes / 60 seconds to choose all the correct answers.
* You can not choose a number more than once.

## 📹 Video
<div name="demo" align="center" width=1189px>
  <p align="center">
    <img width=800px height=410px src="https://github.com/aashrafh/NumberMunchers/blob/master/demo/demo-gif.gif" alt="Video Demo">
    </p>
  </div>
  
## 📷 Screenshots
<div name="demo" align="center" width=1189px>
  <p align="center">
    <img width=800px height=410px src="https://github.com/aashrafh/NumberMunchers/blob/master/demo/demo-img-1.png" alt="Image Demo">
    <img width=800px height=410px src="hhttps://github.com/aashrafh/NumberMunchers/blob/master/demo/demo-img-3.png" alt="Image Demo">
    <img width=800px height=410px src="https://github.com/aashrafh/NumberMunchers/blob/master/demo/demo-img-2.png" alt="Image Demo">
  </p>
  </div>

## 🏁 Install <a name = "Install"></a>
1. Install [DOSBox](https://www.dosbox.com/).
2. Open ```DOSBox Options```.
3. Add the following lines to the end of the text file.
```
mount m Z:\Workspaces\GitHub\NumberMunchers\src
m:
masm main
link main
main
```
**Note:** do not forget to replace ```Z:\Workspaces\GitHub\NumberMunchers\src``` with your local directory.

## 💭 How To Play <a name = "play"></a>
You have to choice all the correct numbers. To move the player you can use:
* ```W``` to move ```UP```
* ```S``` to move ```DOWN```
* ```A``` to move ```LEFT```
* ```D``` to move ```RIGHT```
*```V``` to choice a number

## ⛏️ Built Using <a name = "tech"></a>
- [Assembly8086](https://en.wikipedia.org/wiki/X86_assembly_language) - low level programming language.
- [DOSBox](https://www.dosbox.com/) - emulator program.
