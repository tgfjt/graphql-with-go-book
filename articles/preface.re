= はじめに

本書はGraphQLサーバをGo言語で構築していく本です。
筆者もコミッタになっている@<href>{https://github.com/99designs/gqlgen,github.com/99designs/gqlgen}の利用を前提として解説します。
本書執筆時点でのgqlgenのバージョンは次のとおりです。

//cmd{
#@# docker に go 入れるのだるいので #@mapoutput(cd ../code && go list -m -u github.com/99designs/gqlgen)
github.com/99designs/gqlgen v0.5.1
#@# #@end
//}

残念ながら、筆者はまだGraphQLを使ったなんらかのAPIサーバをリリースできていません。
よって、ここで語られる知見は今後アップデートされ、変わっていく可能性があります。

もしあなたが次の範囲の人であれば、ぜひ本書を読み進めていっていただきたいです。

 * GraphQLに興味がある
 ** 特にサーバ側視点の話が知りたい
 ** 罠とかも知りたい
 * Go言語でやっていきたい
 * schemaありきで開発を進めたい
 * ボイラープレートなコードは嫌いです

逆に、次のような話題については深く言及しません。

 * GraphQLの仕様自体に対しての懇切丁寧な説明
 * 特定のクライアント側ツールに関する話
 * クライアント側についての設計のベストプラクティス@<fn>{mtc-front}

//footnote[mtc-front][ちょっとだけあるからここ見て→@<href>{https://github.com/mercari/mtc2018-web/pull/134}]

//comment{
 * TODO 某wikiに書いた内容をもう一回読み返して盛り込む
//}
