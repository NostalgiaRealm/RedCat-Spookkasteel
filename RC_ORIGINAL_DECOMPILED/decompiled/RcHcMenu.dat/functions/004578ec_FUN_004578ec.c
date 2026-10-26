/*
 * FUN_004578ec at 004578ec
 * undefined __register FUN_004578ec(undefined * param_1, undefined1 param_2, undefined1 param_3, char param_4)
 * Address ranges: 004578ec-004579a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004578ec(undefined *param_1,undefined1 param_2,undefined1 param_3,char param_4)

{
  uint uVar1;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  UINT *in_FS_OFFSET;
  bool bVar4;
  UINT UVar5;
  UINT UStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  undefined4 local_14;
  UINT local_10;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  undefined *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_004579a8;
  UStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (UINT)&UStack_28;
  local_a = param_3;
  local_9 = param_2;
  local_8 = param_1;
  local_10 = FUN_00457324(param_2);
  uVar1 = FUN_00457404(local_a);
  bVar4 = SCARRY4(local_10,uVar1);
  local_10 = local_10 + uVar1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  uVar1 = FUN_00457690(local_a,param_4);
  bVar4 = SCARRY4(local_10,uVar1);
  local_10 = local_10 + uVar1;
  if (bVar4) {
    thunk_FUN_00402874(uVar1);
  }
  SetForegroundWindow(*(HWND *)(*(int *)PTR_DAT_005723fc + 0x24));
  UVar5 = local_10;
  FUN_00450eb0(*(int *)PTR_DAT_005723fc,(int *)&local_18);
  pCVar2 = FUN_004041f4(local_18);
  pCVar3 = FUN_004041f4(local_8);
  local_14 = FUN_004514e4(*(int *)PTR_DAT_005723fc,pCVar3,pCVar2,UVar5);
  local_b = FUN_004574f0(local_14);
  *in_FS_OFFSET = UVar5;
  puStack_24 = &LAB_004579af;
  UStack_28 = 0x4579a7;
  FUN_00403db0((int *)&local_18);
  return;
}

