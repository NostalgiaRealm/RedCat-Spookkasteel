/*
 * FUN_00564308 at 00564308
 * undefined __register FUN_00564308(int * param_1)
 * Address ranges: 00564308-0056438e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x563ec4 slot published:FormKeyDown for TfrmIntro. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x563ec4 slot
   published:FormKeyDown for TfrmIntro. Original bytes unchanged; names and types still inferred. */

void FUN_00564308(int *param_1)

{
  char cVar1;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 uVar3;
  
  cVar1 = FUN_00563d24(param_1[0xb4]);
  if (cVar1 == '\x02') {
    FUN_00563034((int *)param_1[0xb4],extraout_EDX,extraout_ECX);
    FUN_005637f4(param_1[0xb4]);
    FUN_0044dab0(param_1,extraout_EDX_00,extraout_ECX_00);
    iVar2 = extraout_ECX_01;
    uVar3 = extraout_EDX_01;
  }
  else {
    cVar1 = FUN_00563d24(param_1[0xb4]);
    iVar2 = extraout_ECX_02;
    uVar3 = extraout_EDX_02;
    if (cVar1 != '\x06') {
      cVar1 = FUN_00563d24(param_1[0xb4]);
      iVar2 = extraout_ECX_03;
      uVar3 = extraout_EDX_03;
      if (cVar1 != '\x01') goto LAB_00564381;
    }
    FUN_00562d84((int *)param_1[0xb4],uVar3,iVar2);
    iVar2 = extraout_ECX_04;
    uVar3 = extraout_EDX_04;
  }
LAB_00564381:
  FUN_0044dab0(param_1,uVar3,iVar2);
  return;
}

