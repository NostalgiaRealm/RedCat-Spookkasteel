/*
 * FUN_10005390 at 10005390
 * int __cdecl FUN_10005390(int param_1, int param_2, int param_3, int param_4, int param_5, int * param_6)
 * Address ranges: 10005390-100053fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10005390(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  iVar1 = param_1 + 0x110;
  iVar3 = 0;
  do {
    if ((((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 4) == param_2)) &&
        (*(int *)(iVar1 + 8) == param_3)) &&
       ((*(int *)(iVar1 + 0xc) == param_4 && (*(int *)(iVar1 + 0x10) == param_5)))) {
      iVar2 = 0x1f;
      bVar6 = true;
      piVar4 = (int *)(iVar1 + 0x18);
      piVar5 = param_6;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar6 = *piVar4 == *piVar5;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (bVar6);
      if (bVar6) {
        return iVar1;
      }
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 0xa4;
    if (0x7f < iVar3) {
      return 0;
    }
  } while( true );
}

