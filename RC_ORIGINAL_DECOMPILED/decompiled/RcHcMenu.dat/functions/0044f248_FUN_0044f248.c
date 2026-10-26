/*
 * FUN_0044f248 at 0044f248
 * undefined __register FUN_0044f248(int param_1)
 * Address ranges: 0044f248-0044f2a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f248(int param_1)

{
  HCURSOR pHVar1;
  int iVar2;
  undefined4 *puVar3;
  HINSTANCE pHVar4;
  
  pHVar1 = LoadCursorA((HINSTANCE)0x0,&DAT_00007f00);
  *(HCURSOR *)(param_1 + 0x54) = pHVar1;
  iVar2 = -0x16;
  puVar3 = &DAT_0056fa88;
  do {
    pHVar4 = DAT_005734dc;
    if (((iVar2 < -0x11) || (-0xc < iVar2)) && (iVar2 != -0x15)) {
      pHVar4 = (HINSTANCE)0x0;
    }
    pHVar1 = LoadCursorA(pHVar4,(LPCSTR)*puVar3);
    FUN_0044f348(param_1,iVar2,pHVar1);
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != -1);
  return;
}

