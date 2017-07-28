lc-spider -c config.json
npm run generate
cp ./solutions/README.md ./
git add .
git commit -m ":smile:update my solutions"
git push origin gh-pages