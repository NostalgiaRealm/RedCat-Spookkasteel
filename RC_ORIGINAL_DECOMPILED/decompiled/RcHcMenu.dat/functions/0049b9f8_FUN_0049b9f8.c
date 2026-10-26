/*
 * FUN_0049b9f8 at 0049b9f8
 * undefined __register FUN_0049b9f8(int * param_1)
 * Address ranges: 0049b9f8-0049ba7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049b9f8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int local_408 [256];
  int *local_8;
  
  bVar5 = 0;
  local_8 = param_1;
  uVar1 = FUN_00409738(param_1 + 0x25,(int *)(param_1[9] + 0x15),0x400);
  if ((char)uVar1 == '\0') {
    piVar3 = local_8 + 0x25;
    piVar4 = local_408;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_0049aa80(local_8,1,0);
    piVar3 = local_408;
    piVar4 = local_8 + 0x25;
    for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
      piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    }
    FUN_0049a214(local_8[9],local_8 + 0x25);
    *(undefined1 *)((int)local_8 + 0x1a) = 1;
  }
  return;
}

