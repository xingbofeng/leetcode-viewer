lc-spider -c config.json
npm run generate
rm -f README.md
cp ./solutions/README.md ./
git add .
git commit -m ":smile:update my solutions"
git push origin gh-pages