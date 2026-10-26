/*
 * FUN_00451454 at 00451454
 * undefined __register FUN_00451454(int param_1, undefined4 param_2)
 * Address ranges: 00451454-004514e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451454(int param_1,undefined4 param_2)

{
  HWND pHVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  LPCVOID pvVar5;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  pHVar1 = GetCapture();
  if (pHVar1 != (HWND)0x0) {
    lParam = 0;
    wParam = 0;
    Msg = 0x1f;
    pHVar1 = GetCapture();
    SendMessageA(pHVar1,Msg,wParam,lParam);
  }
  piVar2 = (int *)FUN_0040cc44();
  uVar3 = FUN_0040320c(piVar2,(int)&DAT_00408ac4);
  if ((char)uVar3 == '\0') {
    pvVar5 = (LPCVOID)FUN_0040cc5c();
    piVar2 = (int *)FUN_0040cc44();
    FUN_0040ce08(piVar2,pvVar5);
  }
  else {
    piVar2 = (int *)FUN_0040cc44();
    uVar3 = FUN_0040320c(piVar2,(int)&DAT_00408b2c);
    if ((char)uVar3 == '\0') {
      if (*(short *)(param_1 + 0xba) == 0) {
        iVar4 = FUN_0040cc44();
        FUN_0045163c(param_1,iVar4);
        return;
      }
      uVar3 = FUN_0040cc44();
      (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0xbc),param_2,uVar3);
    }
  }
  return;
}

