/*
 * FUN_00451ea0 at 00451ea0
 * int __register FUN_00451ea0(char * param_1, int param_2, char param_3)
 * Address ranges: 00451ea0-00451eae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00451ea0(char *param_1,int param_2,char param_3)

{
  char cVar1;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (param_3 == cVar1);
  return param_2;
}

