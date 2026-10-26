/*
 * FUN_00451b2c at 00451b2c
 * undefined __register FUN_00451b2c(int * param_1, uint * param_2)
 * Address ranges: 00451b2c-00451bb0;00451bb8-00451bbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451b2c(int *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 in_ZF;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x451b40;
  FUN_00404140((uint *)param_1[0x11],param_2);
  if (!(bool)in_ZF) {
    puStack_14 = (undefined1 *)0x451b4c;
    FUN_00403e04(param_1 + 0x11,param_2);
    if (*(short *)((int)param_1 + 0xd2) == 0) {
      puStack_14 = (undefined1 *)0x451b74;
      piVar1 = FUN_0042d958((int *)&PTR_FUN_0042d8bc,'\x01',param_1);
      puStack_14 = (undefined1 *)0x451b81;
      FUN_0043ddb0(piVar1,param_2);
      puStack_18 = &LAB_00451bb1;
      uStack_1c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_1c;
      puStack_14 = &stack0xfffffffc;
      FUN_00403270(piVar1,extraout_EDX,extraout_ECX);
      *in_FS_OFFSET = uStack_1c;
      puStack_14 = (undefined1 *)0x451bb8;
      puStack_18 = (undefined1 *)0x451bb0;
      FUN_00403094(piVar1);
      return;
    }
    puStack_14 = (undefined1 *)0x451b64;
    (*(code *)param_1[0x34])(param_1[0x35],param_1);
  }
  return;
}

