/*
 * FUN_0043e8ec at 0043e8ec
 * int __register FUN_0043e8ec(int * param_1)
 * Address ranges: 0043e8ec-0043e90c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043e8ec(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  int iVar2;
  
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043e588(param_1);
    iVar2 = ImageList_GetImageCount(himl);
    return iVar2;
  }
  return 0;
}

