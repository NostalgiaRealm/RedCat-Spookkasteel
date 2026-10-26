/*
 * FUN_0050e18c at 0050e18c
 * undefined __register FUN_0050e18c(int * param_1, int param_2)
 * Address ranges: 0050e18c-0050e238
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e18c(int *param_1,int param_2)

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
  puStack_1c = &LAB_0050e239;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_c = param_2;
  local_8 = param_1;
  FUN_00432714((int)param_1,&local_10);
  cVar1 = FUN_0044872c(CONCAT22((short)((uint)local_c >> 0x10),*(undefined2 *)(local_c + 4)),
                       local_10);
  if (cVar1 != '\0') {
    cVar1 = FUN_00403270(local_8,extraout_EDX,extraout_ECX);
    if (cVar1 != '\0') {
      (**(code **)(*local_8 + 0xb0))();
      FUN_0050e91c(local_8);
      if (*(short *)((int)local_8 + 0x10a) != 0) {
        (*(code *)local_8[0x42])(local_8[0x43],local_8);
      }
      *(undefined4 *)(local_c + 0xc) = 1;
      goto LAB_0050e223;
    }
  }
  FUN_0042bba4(local_8,local_c);
LAB_0050e223:
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0050e240;
  puStack_1c = (undefined1 *)0x50e238;
  FUN_00403db0(&local_10);
  return;
}

