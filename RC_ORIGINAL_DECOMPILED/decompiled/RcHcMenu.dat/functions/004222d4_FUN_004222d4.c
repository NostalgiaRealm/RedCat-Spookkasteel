/*
 * FUN_004222d4 at 004222d4
 * undefined __register FUN_004222d4(int * param_1, HPALETTE param_2)
 * Address ranges: 004222d4-0042236a;00422383-004223a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 14 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 14 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_004222d4(int *param_1,HPALETTE param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined1 *puStack_74;
  undefined4 local_5c [21];
  HPALETTE local_8;
  
  bVar5 = 0;
  iVar1 = param_1[8];
  if (param_2 != *(HPALETTE *)(iVar1 + 0x10)) {
    if ((param_2 == (HPALETTE)0x0) && (*(int *)(iVar1 + 4) == 1)) {
      FUN_0041aea0(*(HGDIOBJ *)(iVar1 + 0x10));
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      FUN_00421638((int)param_1);
      FUN_00421648((int)param_1);
      puVar3 = (undefined4 *)(iVar1 + 0x18);
      puVar4 = local_5c;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      puStack_74 = (undefined1 *)0x42233a;
      local_8 = FUN_00420658(*(HBITMAP *)(iVar1 + 8),*(HPALETTE *)(iVar1 + 0x10),param_2,0,
                             (int)local_5c);
      puStack_78 = &LAB_0042236b;
      uStack_7c = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_7c;
      uVar6 = 0;
      puStack_74 = &stack0xfffffffc;
      FUN_00421958((int)param_1,local_8,param_2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),local_5c);
      *in_FS_OFFSET = uVar6;
    }
    FUN_00420550(*(HGDIOBJ *)(param_1[8] + 0x14),param_2,param_1[8] + 0x18);
    *(undefined1 *)((int)param_1 + 0x1a) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

