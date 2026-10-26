/*
 * FUN_0043a668 at 0043a668
 * undefined __register FUN_0043a668(int param_1)
 * Address ranges: 0043a668-0043a6f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a668(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = FUN_0043a5c0(param_1,'\x01');
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return;
    }
    iVar2 = FUN_0043a5c0(param_1,'\x02');
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = FUN_0043a4b0(param_1);
  iVar3 = iVar2 / iVar3;
  iVar4 = FUN_0043a4c4(iVar1);
  *(int *)(iVar1 + 0x20) = iVar4 + iVar3;
  FUN_0043a7e8(iVar1);
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0x20) = *(int *)(*(int *)(iVar1 + 0x18) + 0x20) + iVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + iVar2 % iVar3;
    }
    FUN_0043a7e8(iVar1);
  }
  return;
}

