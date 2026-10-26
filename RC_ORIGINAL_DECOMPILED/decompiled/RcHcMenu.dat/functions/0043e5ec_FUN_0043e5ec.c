/*
 * FUN_0043e5ec at 0043e5ec
 * undefined __register FUN_0043e5ec(int * param_1)
 * Address ranges: 0043e5ec-0043e61e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e5ec(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  
  bVar1 = FUN_0043e3b4((int)param_1);
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if ((bVar1) && (*(char *)((int)param_1 + 0x36) == '\0')) {
    himl = (HIMAGELIST)FUN_0043e588(param_1);
    ImageList_Destroy(himl);
    uVar2 = extraout_ECX_00;
    uVar3 = extraout_EDX_00;
  }
  param_1[0xc] = 0;
  FUN_00403270(param_1,uVar3,uVar2);
  return;
}

