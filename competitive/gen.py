#!/bin/python3
import os
import sys
import argparse
__version__ = "1.0"
parser = argparse.ArgumentParser(description='file structure for compitive programming')

parser.add_argument('--t',metavar='c/cpp/java/py',dest='type',default='cpp',help='file type c/cpp/java/py')
parser.add_argument('foldername',metavar='foldername',help='Problem name')
args=parser.parse_args()
folder=os.getcwd()+os.sep+args.foldername
solfile=folder+os.sep+'sol.'+args.type
infile=folder+os.sep+'in.txt'

try:
    os.makedirs(folder)
    open(infile,'w+').close()
    print('folder creation successful')
except FileExistsError:
    print('already exist')
    pass

if args.type=='cpp':
    try:
        f= open(solfile,'w+')
        f.write('#include <bits/stdc++.h>\n\nusing namespace std;\n\nint main()\n{\n\t//freopen(\"in.txt\",\"r\",stdin);\n\t\n\treturn 0;\n}')
        f.close()
    except Exception as e:
        print(e)
elif args.type=='py':
    try:
        f= open(solfile,'w+')
        f.write('import os')
        f.close()
    except Exception as e:
        print(e)
else: 
    print('Not implemented yet')
