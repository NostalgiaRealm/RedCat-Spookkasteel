/*
 * FUN_00471984 at 00471984
 * undefined __register FUN_00471984(int param_1, int * param_2, int param_3)
 * Address ranges: 00471984-00471ab6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 34 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 34 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00471984(int param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *in_FS_OFFSET;
  int in_stack_ffffffb8;
  int iStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  byte *local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  undefined *local_14;
  undefined1 local_10;
  undefined *local_c;
  undefined1 local_8;
  
  puStack_3c = &stack0xfffffffc;
  local_28 = 0;
  local_2c = (byte *)0x0;
  local_20 = 0;
  local_24 = (byte *)0x0;
  puStack_40 = &LAB_00471ab7;
  iStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_44;
  puVar2 = &stack0xfffffffc;
  if ((&DAT_005707fc)[*(byte *)(param_2 + 0xd)] != (&DAT_005707fc)[*(byte *)(param_3 + 0x21)]) {
    FUN_004692f8((int)param_2,&local_20);
    local_1c = local_20;
    local_18 = 0xb;
    local_14 = (&PTR_s_Unknown_00570698)[*(byte *)(param_2 + 0xd)];
    local_10 = 0xb;
    local_c = (&PTR_s_Unknown_00570698)[*(byte *)(param_3 + 0x21)];
    local_8 = 0xb;
    FUN_00406a48((undefined4 *)PTR_PTR_0057237c,(int *)&local_24);
    FUN_00466e30(local_24,&local_1c,2,param_1);
    in_stack_ffffffb8 = param_1;
    puVar2 = puStack_3c;
  }
  puStack_3c = puVar2;
  cVar1 = (char)param_2[0xd];
  if (((cVar1 == '\b') || ((byte)(cVar1 - 0xcU) < 2)) || (cVar1 == '\x1c')) {
    iVar3 = (**(code **)(*param_2 + 0x80))();
    iVar4 = FUN_00467870(param_3);
    if (iVar3 != iVar4) {
      FUN_004692f8((int)param_2,&local_28);
      local_1c = local_28;
      local_18 = 0xb;
      local_14 = (undefined *)(**(code **)(*param_2 + 0x80))();
      local_10 = 0;
      local_c = (undefined *)FUN_00467870(param_3);
      local_8 = 0;
      FUN_00406a48((undefined4 *)PTR_PTR_00572424,(int *)&local_2c);
      FUN_00466e30(local_2c,&local_1c,2,in_stack_ffffffb8);
    }
  }
  *in_FS_OFFSET = in_stack_ffffffb8;
  puStack_40 = &LAB_00471abe;
  iStack_44 = 0x471ab6;
  FUN_00403dd4((int *)&local_2c,4);
  return;
}

