/*
 * FUN_00411c2c at 00411c2c
 * undefined4 __register FUN_00411c2c(char * param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 00411c2c-00411c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00411c2c(char *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (-1 < param_4) {
    iVar3 = param_4 + 1;
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      uVar1 = FUN_004097ac((char *)*puVar2,param_1);
      if ((char)uVar1 != '\0') {
        *param_2 = puVar2[-1];
        return CONCAT31((int3)((uint)uVar1 >> 8),1);
      }
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

