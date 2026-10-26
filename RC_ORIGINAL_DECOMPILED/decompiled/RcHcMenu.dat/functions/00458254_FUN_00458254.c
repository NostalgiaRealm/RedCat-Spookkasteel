/*
 * FUN_00458254 at 00458254
 * undefined4 __register FUN_00458254(char * param_1, char param_2)
 * Address ranges: 00458254-004582a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00458254(char *param_1,char param_2)

{
  int iVar1;
  
  if ((param_1 == (char *)0x0) || (iVar1 = *(int *)(param_1 + -4), iVar1 == 0)) {
    return 0;
  }
  do {
    if (iVar1 < 4) {
      if (iVar1 == 3) goto LAB_0045826c;
      if (iVar1 == 2) goto LAB_00458274;
      if (iVar1 != 1) {
        return 0;
      }
    }
    else {
      if (param_2 == param_1[3]) {
        return 1;
      }
LAB_0045826c:
      if (param_2 == param_1[2]) {
        return 1;
      }
LAB_00458274:
      if (param_2 == param_1[1]) {
        return 1;
      }
    }
    if (param_2 == *param_1) {
      return 1;
    }
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -4;
  } while( true );
}

