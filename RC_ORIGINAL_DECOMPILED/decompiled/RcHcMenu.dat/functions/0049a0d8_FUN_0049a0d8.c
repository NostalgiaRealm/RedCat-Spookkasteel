/*
 * FUN_0049a0d8 at 0049a0d8
 * undefined __register FUN_0049a0d8(int * param_1, char param_2)
 * Address ranges: 0049a0d8-0049a191
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049a0d8(int *param_1,char param_2)

{
  int *piVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  byte extraout_DL;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar5;
  
  piVar1 = FUN_00403434(param_1,param_2);
  if (piVar1[0x109] == 0) {
    BVar2 = FUN_00402800(piVar1[0x110]);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  else {
    if (piVar1[0x10d] != 0) {
      SelectObject((HDC)piVar1[0x108],(HGDIOBJ)piVar1[0x10d]);
    }
    BVar2 = DeleteObject((HGDIOBJ)piVar1[0x109]);
    uVar4 = extraout_ECX;
    uVar5 = extraout_EDX;
  }
  piVar3 = FUN_00499078(BVar2,uVar5,uVar4);
  FUN_0049900c((int)piVar3,piVar1 + 0x10e);
  if (piVar1[0x108] != 0) {
    DeleteDC((HDC)piVar1[0x108]);
  }
  FUN_00402800(piVar1[3]);
  FUN_00403084(piVar1,extraout_DL & 0xfc);
  if ('\0' < (char)extraout_DL) {
    FUN_00403424(piVar1);
  }
  return;
}

