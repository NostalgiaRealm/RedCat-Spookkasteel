/*
 * FUN_00526d84 at 00526d84
 * undefined __register FUN_00526d84(int * param_1, byte * param_2)
 * Address ranges: 00526d84-00526dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00526d84(int *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  cVar1 = FUN_0048d3ac((byte *)(param_1 + 0x11),param_2);
  if (cVar1 == '\0') {
    piVar3 = param_1 + 0x11;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *(int *)param_2;
      param_2 = param_2 + (uint)bVar4 * -8 + 4;
      piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    }
    (**(code **)(*param_1 + 0xc))();
  }
  return;
}

