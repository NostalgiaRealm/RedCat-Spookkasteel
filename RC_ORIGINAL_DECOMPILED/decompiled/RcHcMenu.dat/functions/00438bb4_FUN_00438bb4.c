/*
 * FUN_00438bb4 at 00438bb4
 * undefined __register FUN_00438bb4(int param_1, char param_2)
 * Address ranges: 00438bb4-00438c10
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438bb4(int param_1,char param_2)

{
  bool bVar1;
  uint uVar2;
  
  if (param_2 != *(char *)(param_1 + 0x174)) {
    *(char *)(param_1 + 0x174) = param_2;
    bVar1 = FUN_00438c84(param_1);
    if (bVar1) {
      uVar2 = GetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10);
      uVar2 = uVar2 & 0xfffeffff;
      if (param_2 != '\0') {
        uVar2 = uVar2 | 0x10000;
      }
      SetWindowLongA(*(HWND *)(param_1 + 0x14c),-0x10,uVar2);
    }
    FUN_00433700(param_1,0xb028,0,0);
  }
  return;
}

