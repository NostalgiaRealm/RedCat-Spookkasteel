/*
 * FUN_004893cc at 004893cc
 * DWORD __register FUN_004893cc(int param_1, LPCSTR param_2, DWORD param_3)
 * Address ranges: 004893cc-0048947e;00489486-004894eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 2 for TBlobStream. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47ef98 slot 2 for
   TBlobStream. Original bytes unchanged; names and types still inferred. */

DWORD FUN_004893cc(int param_1,LPCSTR param_2,DWORD param_3)

{
  undefined4 uVar1;
  LPSTR pCVar2;
  uint uVar3;
  DWORD DVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  LPCSTR pCStack_1c;
  
  DVar4 = 0;
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (*(char *)(*(int *)(param_1 + 4) + 0xd8) != '\0') {
      pCStack_1c = (LPCSTR)0x489406;
      pCVar2 = (LPSTR)FUN_004027e8(param_3);
      puStack_20 = &LAB_0048947f;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      pCStack_1c = &stack0xfffffffc;
      FUN_0047fb70(*(int *)(*(int *)(param_1 + 8) + 0x180),param_2,pCVar2,param_3);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + 0x168);
      uVar3 = thunk_FUN_00479ac4(uVar1);
      FUN_0047fe48(uVar3);
      *in_FS_OFFSET = uVar1;
      DVar4 = FUN_00402800((int)pCVar2);
      return DVar4;
    }
    uStack_24 = *(undefined4 *)(param_1 + 0x1c);
    puStack_20 = (undefined1 *)param_3;
    pCStack_1c = param_2;
    uVar3 = thunk_FUN_00479ac4(*(undefined4 *)(*(int *)(param_1 + 8) + 0x168));
    FUN_0047fe48(uVar3);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_3;
    *(undefined1 *)(param_1 + 0x19) = 1;
    FUN_00485260(*(int *)(param_1 + 8),*(int *)(param_1 + 4),*(int *)(param_1 + 0xc),
                 (undefined4 *)0x0);
    DVar4 = param_3;
  }
  return DVar4;
}

