# Chain Of Responsibility pattern cpp demo code

## Overview

    Chain Of Responsibility Patternの使い方

## 使いどころ

    委譲とも少し違う、処理を行う責任をその役割をもったオブジェクトへ渡すパターンです。  
    例では、荷物の重量を定義し、重さに応じて荷物の処理を変化させるようにしています。  
    クラスをネストし、チェック処理に応じて処理を行わせるようにしている点はswitch文や  
    複数のif条件式に通じるものがあると思います。  

## Build

    1. このリポジトリをクローンします。  
    2. 以下のコマンドでビルドします。  
    ex. VS2017 の場合  
    powershell.exe cmake -S . -B build -G "\"Visual Studio 15 2017 Win64\""  
    powershell.exe cmake --build build  

    ex. VS2019以上の場合  
    powershell.exe cmake -S . -B build  
    powershell.exe cmake --build build  

    ex. Ninja + LLVMの場合(LLVM 15 win64で検証)  
    powershell.exe cmake -S . -B build -G "\"Ninja Multi-Config\""  
    powershell.exe cmake --build build --config debug

## Licence

[MIT](https://github.com/IwachanOrigin/chainofresponsibility_cpp/blob/master/LICENSE)

