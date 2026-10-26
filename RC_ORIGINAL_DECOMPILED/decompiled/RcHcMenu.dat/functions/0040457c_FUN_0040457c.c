/*
 * FUN_0040457c at 0040457c
 * undefined __register FUN_0040457c(BSTR param_1, OLECHAR * param_2)
 * Address ranges: 0040457c-004045b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040457c(BSTR param_1,OLECHAR *param_2)

{
  UINT UVar1;
  OLECHAR *pOVar2;
  
  UVar1 = 0;
  pOVar2 = param_2;
  if (param_2 != (OLECHAR *)0x0) {
    for (; *pOVar2 != L'\0'; pOVar2 = pOVar2 + 4) {
      if (pOVar2[1] == L'\0') {
LAB_004045a5:
        pOVar2 = pOVar2 + 1;
        break;
      }
      if (pOVar2[2] == L'\0') {
LAB_004045a2:
        pOVar2 = pOVar2 + 1;
        goto LAB_004045a5;
      }
      if (pOVar2[3] == L'\0') {
        pOVar2 = pOVar2 + 1;
        goto LAB_004045a2;
      }
    }
    UVar1 = (uint)((int)pOVar2 - (int)param_2) >> 1;
  }
  FUN_00404558(param_1,param_2,UVar1);
  return;
}

