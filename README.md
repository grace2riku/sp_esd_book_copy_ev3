# sp_esd_book_copy_ev3
【組込みソフトウェア開発のための構造化プログラミング】の写経(EV3)

# 概要
書籍[【組込みソフトウェア開発のための構造化プログラミング】](https://www.shoeisha.co.jp/book/detail/9784798147611)に掲載のコードを写経した。

書籍の対象ハードウェアは**レゴマインドストームNXT**だが、このリポジトリは**レゴマインドストームEV3**が対象である。

# リポジトリ作成の背景
* 書籍【組込みソフトウェア開発のための構造化プログラミング】掲載の設計に感銘を受けたから

* 実際に動くモノで書籍に書いてあるコードを写経し、書籍に書いてある設計を学びたいという思いがあったため

# EV3について
## EV３の組み立て
* EV3はETロボコンのロボット **【HackEV】** を組み立てた

* 組み立て図は[こちらのHackEV_L8b.pdf](https://github.com/ETrobocon/etroboEV3/blob/master/BuildingInstructions/HackEV_L8b.pdf)を参照した

## ソフトウェア開発環境
こちらの[【ETロボコンのEV3/シミュレータ双方に対応する開発環境】](https://github.com/ETrobocon/etrobo)をインストールする。

## OS
ソフトウェア開発環境でインストールされるRTOS **TOPPERS/EV3RT**を利用する。

インストールされたバージョンは現時点(2023/11/10)の最新版

* バージョン: リリース1.1 
* 最終更新日: 2021年06月25日

TOPPERS/EV3RTのリリース履歴は[こちら](https://dev.toppers.jp/trac_user/ev3pf/wiki/Download)


# ビルド方法(Mac）のメモ
[こちら](https://github.com/ETrobocon/etrobo/wiki)のインストールが完了している前提

1. つぎのファイルを実行する。VSCodeが起動する。

    /Users/k-abe/Desktop/Start ETrobo.command

2. 次のコマンドでビルド・転送する
* ビルド: make app=sp_esd_book_copy_ev3

* ビルド&EV3に転送: make app=sp_esd_book_copy_ev3 up
