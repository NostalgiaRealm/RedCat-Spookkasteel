/*
 * FUN_0043ec08 at 0043ec08
 * int __register FUN_0043ec08(int * param_1)
 * Address ranges: 0043ec08-0043ec2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043ec08(int *param_1)

{
  bool bVar1;
  HIMAGELIST himl;
  COLORREF CVar2;
  int iVar3;
  
  bVar1 = FUN_0043e3b4((int)param_1);
  if (bVar1) {
    himl = (HIMAGELIST)FUN_0043e588(param_1);
    CVar2 = ImageList_GetBkColor(himl);
    iVar3 = FUN_0043e1d0(CVar2);
    return iVar3;
  }
  return param_1[0xe];
}

