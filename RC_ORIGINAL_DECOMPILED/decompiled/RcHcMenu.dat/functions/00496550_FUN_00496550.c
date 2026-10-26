/*
 * FUN_00496550 at 00496550
 * undefined __register FUN_00496550(int * param_1, VARIANT * param_2)
 * Address ranges: 00496550-00496636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00496550(int *param_1,VARIANT *param_2)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  char *pcStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined1 *local_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  VARIANT *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_118 = (undefined1 *)0x0;
  puStack_120 = &LAB_00496637;
  pcStack_124 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_124;
  local_c = param_2;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    (**(code **)(*local_8 + 8))(local_8,&local_118,*local_8,"AppProp <",".GetAsVariant: ",local_14);
    puStack_120 = local_118;
    pcStack_124 = "> is not initialized";
    FUN_004040f0(&local_10,5);
    FUN_00403d94(local_10);
  }
  cVar1 = (**(code **)(*local_8 + 0x50))();
  if (cVar1 == '\0') {
    (**(code **)(*local_8 + 0x28))(local_8,local_c);
  }
  else {
    FUN_00404e28(local_c,(VARIANTARG *)PTR_DAT_00572068);
  }
  *in_FS_OFFSET = pcStack_124;
  puStack_11c = &LAB_0049663e;
  puStack_120 = (undefined1 *)0x496629;
  FUN_00403db0((int *)&local_118);
  puStack_120 = (undefined1 *)0x496636;
  FUN_00403dd4(&local_14,2);
  return;
}

