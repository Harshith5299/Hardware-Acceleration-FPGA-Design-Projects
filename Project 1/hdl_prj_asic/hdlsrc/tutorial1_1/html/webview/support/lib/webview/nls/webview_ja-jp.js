define('webview/nls/webview_ja-jp',{
'webview/resources/slreportgen_webview/nls/modelviewer':{"ExplorerBarButtonLabel":"エクスプローラー バーの非表示/表示","FitToViewButtonLabel":"ビューに合わせる","MarqueeZoomButtonLabel":"ズーム","ModelBrowserButtonLabel":"モデル ブラウザーの非表示/表示","NoExport":"このシステムはエクスポートされませんでした。","Open":"開く","OpenInNewTab":"新しいタブで開く","ViewAll":"すべて表示","advancedSearch":"詳細検索","blockType":"ブロック タイプ","maskType":"マスク タイプ","name":"名前","parent":"親","propertyName":"プロパティ名","propertyValue":"プロパティ値","searchCurrentAndBelow":"現在の階層以下を検索...","searchResults":"検索結果:","_localized":{}}
,
'webview/resources/slreportgen_webview/nls/modelbrowser':{"Open":"開く","OpenInNewTab":"新しいタブで開く","Title":"モデル ブラウザー","_localized":{}}
,
'dijit/nls/common':{"buttonOk":"OK","buttonCancel":"キャンセル","buttonSave":"保存","itemClose":"閉じる","_localized":{}}
,
'dijit/nls/loading':{"loadingState":"ロード中...","errorState":"エラーが発生しました。","_localized":{}}
,
'webview/resources/slreportgen_webview/nls/modelinspector':{"CodeGeneration":"コード生成","Documentation":"ドキュメンテーション","LoggingAndAccessibility":"ログとユーザー補助機能","ParameterAttributes":"パラメーター属性","_localized":{}}
,
'webview/resources/slreportgen_webview/nls/utils':{"ChromeLocalFileSupport":"<p>Google Chrome&trade; ブラウザーで Web ビュー ファイルを開けるようにするには、Web ビュー ファイルが Web ビュー フォルダーのファイルとサブフォルダーにアクセスできるようにブラウザーを設定しなければなりません。設定は使用するプラットフォームによって異なります。</p> <h4>Microsoft Windows</h4> <p><code>--allow-file-access-from-files</code> フラグを使用して Chrome を開くショートカットを作成します。たとえば、Windows&reg; 10 では次の手順に従います。</p> <ol> <li><b>[スタート]</b> ボタンをクリックして、<code>Chrome</code> と入力します。</li> <li>検索結果で [Chrome] を右クリックし、<code>[ファイルの場所を開く]</code> を選択します。</li> <li>アプリケーションのリストから、Chrome をデスクトップにドラッグします。</li> <li>ショートカットを右クリックして <b>[プロパティ]</b> を選択します。</li> <li><b>[リンク先]</b> ボックスの内容に <code>--allow-file-access-from-files</code> を追加します。先頭に必ずハイフン 2 つを使用してください。<b>[OK]</b> をクリックします。</li> </ol> <p>Web ビュー ファイルを開くには、次の手順に従います。</p> <ol> <li>開いている Chrome ブラウザーをすべて閉じます。</li> <li><code>--allow-file-access-from-files</code> フラグが含まれているショートカットを使用して Chrome ブラウザーを開きます。</li> <li>開いている Chrome ブラウザーで Web ビュー ファイルを開きます。たとえば、ファイルをブラウザーにドラッグするか、ファイルを右クリックして <b>[プログラムから開く] > [Google Chrome]</b> を選択します。</li> </ol> <h4>Mac</h4> <ol> <li>Terminal.app を実行します。</li> <li>\"open /Applications Google Chrome.app --allow-file-access-from-files\" を引用符なしで入力します。</li> </ol> <h4>Linux</h4> <ol> <li>ターミナルを起動します。</li> <li>\"./chromium-browser --allow-file-access-from-files\" と入力します (引用符は入力しません)。</li> </ol> <h4>MATLAB</h4> <ol> <li>MATLAB コマンド ウィンドウに移動します。</li> <li>Web ビュー フォルダーに移動します。</li> <li>\"rptview webview.html\" を引用符なしで入力します。</li> </ol>","EdgeLocalFileSupport":"<p>Simulink の Web ビューは、ローカル ファイルのセキュリティ制限のため Microsoft Edge では表示できません。Internet Explorer 11 を使用してください。</p>","FireFoxLocalFileSupport":"<p>Simulink の Web ビューは、ローカル ファイルのセキュリティ制限のため Firefox 68+ で表示できません。ローカル ファイル アクセスを許可するには、次の手順に従います:</p> <ol> <li>ロケーション バーに \"about:config\" と入力します。<li>\"privacy.file_unique_origin\" を検索し、値を false に設定します。</ol>","OtherLocalFileSupport":"<p>Simulink の Web ビューは、ローカル ファイルのセキュリティ制限のため表示できません。ローカル ファイル アクセスを有効にしてください。</p>","SafariLocalFileSupport":"<p>Simulink の Web ビューは、ローカル ファイルのセキュリティ制限のため Safari 11+ では表示できません。ローカル ファイル アクセスを許可するには:</p> <h4>開発メニューを有効にする</h4> <ol> <li>[Safari<i></i>] メニューをクリックします。<li>[環境設定<i></i>] メニュー項目をクリックします。<li>[詳細<i></i>] タブをクリックします。</li> <li>[メニューバーに開発メニューを表示<i></i>] をオンにします。</li> </ol> <h4>ローカル ファイル アクセスを有効にする</h4> <ol> <li>[開発<i></i>] メニューをクリックします。</li> <li>[ローカルファイルの制限を無効にする<i></i>] を選択します。</li> <li>ページの再読み込みを行います。</li> </ol>","SvgSupport":"<h4>SVG サポートが必要</h4> <p>ブラウザーが Scalable Vector Graphics をサポートしていません。次のいずれかのブラウザーを使用してみてください: <ul> <li><a href=\"http://www.google.com/chrome/\">Chrome</a></li> <li><a href=\"http://www.mozilla.org/products/firefox/all\">Firefox</a></li> <li><a href=\"http://windows.microsoft.com/en-us/internet-explorer/download-ie\">Internet Explorer 9 以降</a></li> </ul>","UnsupportedBrowser":"サポートされていないブラウザー","_localized":{}}
});