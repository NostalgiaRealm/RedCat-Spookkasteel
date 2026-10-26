/*
 * FUN_004220c8 at 004220c8
 * undefined __register FUN_004220c8(int * param_1, char param_2)
 * Address ranges: 004220c8-004221ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 26 for TBitmap. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41acd8 slot 26 for TBitmap.
   Original bytes unchanged; names and types still inferred. */

void FUN_004220c8(int *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  HPALETTE pHVar4;
  HPALETTE pHVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  byte bVar10;
  undefined4 local_64 [6];
  undefined4 local_4c;
  
  bVar10 = 0;
  uVar3 = FUN_004214f4((int)param_1);
  if (param_2 != (char)uVar3) {
    iVar1 = param_1[8];
    if ((*(int *)(iVar1 + 8) == 0) && (*(int *)(iVar1 + 0x14) == 0)) {
      if (param_2 == '\x01') {
        *(undefined4 *)(iVar1 + 0x30) = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 0x30) = 0x28;
      }
    }
    else {
      if (param_2 == '\0') {
        if ((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x14) == *(int *)(iVar1 + 8))) {
          return;
        }
        FUN_00421638((int)param_1);
        FUN_00421798((int)param_1);
        FUN_004215c4((int)param_1);
        if (*(int *)(iVar1 + 4) == 1) {
          uVar3 = *(undefined4 *)(iVar1 + 0x14);
          *(undefined4 *)(iVar1 + 0x14) = 0;
          uVar2 = *(undefined4 *)(iVar1 + 0x10);
          *(undefined4 *)(iVar1 + 0x10) = 0;
          FUN_00421958((int)param_1,uVar3,uVar2,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)(iVar1 + 0x18));
        }
        else {
          FUN_004210b8((int)param_1,*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),
                       (undefined4 *)(iVar1 + 0x18));
        }
      }
      else {
        if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(iVar1 + 8) != *(int *)(iVar1 + 0x14))) {
          return;
        }
        FUN_00421638((int)param_1);
        FUN_00421798((int)param_1);
        puVar7 = (undefined4 *)(iVar1 + 0x18);
        puVar8 = local_64;
        for (iVar6 = 0x15; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          puVar8 = puVar8 + (uint)bVar10 * -2 + 1;
        }
        local_4c = 0;
        bVar9 = *(int *)(iVar1 + 4) != 1;
        if (bVar9) {
          pHVar4 = FUN_00420cb4(*(HPALETTE *)(iVar1 + 0x10));
        }
        else {
          pHVar4 = *(HPALETTE *)(iVar1 + 0x10);
        }
        pHVar5 = FUN_00420658(*(HBITMAP *)(iVar1 + 0x14),*(HPALETTE *)(iVar1 + 0x10),pHVar4,0,
                              (int)local_64);
        if (bVar9) {
          FUN_00421958((int)param_1,pHVar5,pHVar4,(int *)0x0,*(undefined1 *)(iVar1 + 0x70),
                       (undefined4 *)&stack0xffffff94);
        }
        else {
          *(HPALETTE *)(iVar1 + 8) = pHVar5;
        }
      }
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  return;
}

