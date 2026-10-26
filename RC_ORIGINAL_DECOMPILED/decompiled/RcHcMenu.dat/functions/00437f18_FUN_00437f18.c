/*
 * FUN_00437f18 at 00437f18
 * undefined __register FUN_00437f18(int * param_1)
 * Address ranges: 00437f18-00437f5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437f18(int *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar1 == '\0') && (param_1[9] != 0)) {
    FUN_0043555c(param_1,'\0');
  }
  bVar2 = FUN_00438c84((int)param_1);
  if ((bVar2) && ((*(byte *)(param_1 + 8) & 0x10) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x4c))();
    EnableWindow((HWND)param_1[0x53],-(uint)(cVar1 != '\0'));
  }
  return;
}

