/*
 * FUN_00469980 at 00469980
 * undefined FUN_00469980(void)
 * Address ranges: 00469980-004699e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00469980(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x110);
  iVar5 = 5;
  fVar2 = *(float *)(param_1 + 0x114);
  uVar3 = *(undefined4 *)(param_1 + 0x118);
  iVar4 = param_1 + 0x3f4;
  do {
    if (*(char *)(iVar4 + 0x6c) == '\0') {
      FUN_0047e710();
    }
    else {
      FUN_0047e780();
    }
    iVar5 = iVar5 + -1;
    *(undefined4 *)(iVar4 + 0x118) = uVar1;
    *(float *)(iVar4 + 0x11c) = fVar2 - 0.1;
    *(undefined4 *)(iVar4 + 0x120) = uVar3;
    iVar4 = iVar4 + 0x144;
  } while (iVar5 != 0);
  return;
}

