/*
 * FUN_0042bba4 at 0042bba4
 * undefined __register FUN_0042bba4(int * param_1, int param_2)
 * Address ranges: 0042bba4-0042bc19
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042bba4(int *param_1,int param_2)

{
  char cVar1;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = 0;
  puStack_1c = &LAB_0042bc1a;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  FUN_00432714((int)param_1,&local_8);
  cVar1 = FUN_0044872c(CONCAT22(extraout_var,*(undefined2 *)(param_2 + 4)),local_8);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      FUN_00403270(param_1,extraout_EDX_00,extraout_ECX_00);
      *(undefined4 *)(param_2 + 0xc) = 1;
      goto LAB_0042bc04;
    }
  }
  FUN_00437eb0((int)param_1,param_2);
LAB_0042bc04:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0042bc21;
  puStack_1c = (undefined1 *)0x42bc19;
  FUN_00403db0(&local_8);
  return;
}

