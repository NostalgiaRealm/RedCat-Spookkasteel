/*
 * FUN_0054445c at 0054445c
 * undefined __register FUN_0054445c(undefined4 param_1, int param_2, int param_3, VARIANT * param_4, byte * param_5, int * param_6)
 * Address ranges: 0054445c-00544534
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054445c(undefined4 param_1,int param_2,int param_3,VARIANT *param_4,byte *param_5,
                 int *param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_50;
  undefined1 *puStackY_4c;
  undefined1 *puStackY_48;
  int local_34 [7];
  int *local_18;
  undefined1 local_11;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar2 = local_34;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *param_6;
    param_6 = param_6 + 1;
    piVar2 = piVar2 + 1;
  }
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if ((*param_5 & 8) != 0) {
    FUN_00403d94(" Parameter has an illegal value");
  }
  if (*param_5 == 0) {
    FUN_00403d94(" Parameter has an illegal value");
  }
  local_18 = (int *)FUN_00449cd0((int *)&PTR_FUN_00543fc0,'\x01',0);
  puStackY_48 = (undefined1 *)0x5444e2;
  FUN_00544750(local_18,local_c,local_10,*param_5,local_34);
  puStackY_4c = &LAB_00544535;
  uStackY_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStackY_50;
  puStackY_48 = &stack0xfffffffc;
  iVar1 = (**(code **)(*local_18 + 0xd8))();
  local_11 = iVar1 == 1;
  *param_5 = *(byte *)(local_18 + 0xc3);
  FUN_00404e28(param_4,(VARIANTARG *)(local_18 + 0xce));
  *in_FS_OFFSET = uStackY_50;
  puStackY_48 = &LAB_0054453c;
  puStackY_4c = (undefined1 *)0x544534;
  FUN_00403094(local_18);
  return;
}

