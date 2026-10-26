/*
 * FUN_0043a4c4 at 0043a4c4
 * undefined __register FUN_0043a4c4(int param_1)
 * Address ranges: 0043a4c4-0043a50a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a4c4(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 != *(int *)(*(int *)(param_1 + 0x1c) + 100)) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (*(char *)(iVar2 + 0x10) != '\x01') {
    if (*(char *)(iVar2 + 0x10) == '\x02') {
      FUN_0043a554(param_1,'\x02');
    }
    else {
      piVar1 = FUN_0040ceec((int *)&DAT_00408ac4,'\x01',(undefined4 *)0x0);
      FUN_0040382c(piVar1);
    }
    return;
  }
  FUN_0043a554(param_1,'\x01');
  return;
}

