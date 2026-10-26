/*
 * FUN_00430628 at 00430628
 * undefined __register FUN_00430628(int param_1, char param_2, undefined4 param_3)
 * Address ranges: 00430628-00430684
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00430628(int param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (DAT_00573784 == (int *)0x0) {
      DAT_00573784 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    }
    iVar1 = FUN_004123e0((int)DAT_00573784,param_1);
    if (param_2 == '\0') {
      if (iVar1 != -1) {
        FUN_00412224(DAT_00573784,iVar1);
      }
    }
    else if (iVar1 == -1) {
      FUN_004121d8(DAT_00573784,param_1);
    }
  }
  return;
}

