/*
 * FUN_004be98c at 004be98c
 * undefined __register FUN_004be98c(int * param_1, int * param_2)
 * Address ranges: 004be98c-004bea9b;004beae2-004beb1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004be98c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  short sVar4;
  undefined4 *in_FS_OFFSET;
  char *pcStack_140;
  char *pcStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined1 local_d;
  int *local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_11c = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_130 = &LAB_004beb1d;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puVar2 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    puStack_138 = (undefined1 *)0x4be9d7;
    FUN_00403d94("TAppDAOQuery.MoveBy: No recordset.");
    puVar2 = puStack_12c;
  }
  puStack_12c = puVar2;
  puStack_138 = (undefined1 *)0x4be9df;
  cVar3 = (**(code **)(*local_8 + 0x3c))();
  if (cVar3 == '\0') {
    puStack_138 = (undefined1 *)0x4be9f3;
    FUN_00402fe0(*local_8,local_118);
    puStack_138 = (undefined1 *)0x4bea01;
    FUN_00403fd4(&local_18,local_118);
    puStack_138 = (undefined1 *)local_18;
    pcStack_13c = ".MoveBy: ";
    pcStack_140 = "Not at record";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  local_d = 1;
  if ((char)local_8[6] != '\0') {
    iVar1 = *local_c;
    *local_c = -*local_c;
    if (SBORROW4(0,iVar1)) {
      puStack_138 = (undefined1 *)0x4bea46;
      thunk_FUN_00402874((uint)local_c);
    }
  }
  pcStack_13c = &LAB_004bea9c;
  pcStack_140 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_140;
  local_d = 1;
  puStack_138 = &stack0xfffffffc;
  FUN_004baa60(local_8[0xd],*local_c,(VARIANTARG *)PTR_DAT_005725ac);
  sVar4 = FUN_004b9dc8(local_8[0xd]);
  if (sVar4 == 0) {
    sVar4 = FUN_004b9af4(local_8[0xd]);
    if (sVar4 == 0) goto LAB_004bea92;
  }
  local_d = 0;
LAB_004bea92:
  *in_FS_OFFSET = pcStack_140;
  if ((char)local_8[6] != '\0') {
    iVar1 = *local_c;
    *local_c = -*local_c;
    if (SBORROW4(0,iVar1)) {
      puStack_138 = (undefined1 *)0x4beaf7;
      thunk_FUN_00402874((uint)local_c);
    }
  }
  *in_FS_OFFSET = uStack_134;
  puStack_12c = &LAB_004beb24;
  puStack_130 = (undefined1 *)0x4beb0f;
  FUN_00403db0(&local_11c);
  puStack_130 = (undefined1 *)0x4beb1c;
  FUN_00403dd4(&local_18,2);
  return;
}

