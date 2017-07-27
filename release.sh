cd solutions/
lc-spider -c config.json
cd ..
npm run generate
rm -f README.md
cp ./solutions/README.md ./
