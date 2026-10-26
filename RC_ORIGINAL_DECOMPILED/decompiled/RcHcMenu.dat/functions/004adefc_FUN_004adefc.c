/*
 * FUN_004adefc at 004adefc
 * undefined __register FUN_004adefc(int * param_1, int param_2)
 * Address ranges: 004adefc-004adf9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004adefc(int *param_1,int param_2)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = 0;
  puStack_1c = &LAB_004adfa0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  FUN_00432714((int)param_1,&local_10);
  cVar1 = FUN_0044872c(CONCAT22((short)((uint)local_c >> 0x10),*(undefined2 *)(local_c + 4)),
                       local_10);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*local_8 + 0x4c))();
    if ((((cVar1 != '\0') && (*(char *)((int)local_8 + 0x47) != '\0')) && (local_8[9] != 0)) &&
       (*(char *)(local_8[9] + 0x168) != '\0')) {
      FUN_00403270(local_8,extraout_EDX,extraout_ECX);
      *(undefined4 *)(local_c + 0xc) = 1;
      goto LAB_004adf8a;
    }
  }
  (**(code **)(*local_8 + -0x10))(local_8,local_c);
LAB_004adf8a:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004adfa7;
  puStack_1c = (undefined1 *)0x4adf9f;
  FUN_00403db0(&local_10);
  return;
}

