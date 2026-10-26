/*
 * FUN_004efa08 at 004efa08
 * undefined __register FUN_004efa08(int * param_1)
 * Address ranges: 004efa08-004efaac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4ef4dc slot 33 for TDaviComboButton. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4ef4dc slot 33 for
   TDaviComboButton. Original bytes unchanged; names and types still inferred. */

void FUN_004efa08(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  HDC pHVar5;
  tagRECT *ptVar6;
  UINT UVar7;
  tagRECT local_1c;
  uint local_c;
  int *local_8;
  
  local_8 = param_1;
  iVar2 = FUN_004c8888((int)param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_004c8888((int)local_8);
    iVar2 = (**(code **)(*piVar3 + 0x2c))();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_004c8888((int)local_8);
      iVar2 = (**(code **)(*piVar3 + 0x20))();
      if (iVar2 != 0) {
        FUN_004c813c(local_8);
        return;
      }
    }
  }
  (**(code **)(*local_8 + 0x40))(local_8,&local_1c);
  local_c = 0;
  cVar1 = (**(code **)(*local_8 + 0x4c))();
  if (cVar1 == '\0') {
    local_c = 0x100;
  }
  if (*(char *)((int)local_8 + 0x161) == '\x02') {
    local_c = 0x4200;
  }
  uVar4 = local_c | 5;
  if ((int)uVar4 < 0) {
    uVar4 = thunk_FUN_00402874(uVar4);
  }
  UVar7 = 3;
  ptVar6 = &local_1c;
  pHVar5 = (HDC)FUN_0041cf6c((int *)local_8[0x48]);
  DrawFrameControl(pHVar5,ptVar6,UVar7,uVar4);
  return;
}

