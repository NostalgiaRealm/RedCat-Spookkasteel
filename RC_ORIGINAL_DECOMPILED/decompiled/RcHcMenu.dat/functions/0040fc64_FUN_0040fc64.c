/*
 * FUN_0040fc64 at 0040fc64
 * undefined __register FUN_0040fc64(int * param_1, int param_2, BSTR * param_3)
 * Address ranges: 0040fc64-0040fca1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040fc64(int *param_1,int param_2,BSTR *param_3)

{
  code *pcVar1;
  BSTR *ppOVar2;
  
  ppOVar2 = *(BSTR **)(param_2 + 0x10);
  if (*(BSTR **)(param_2 + 0x10) == (BSTR *)0x80000000) {
    ppOVar2 = param_3;
  }
  pcVar1 = *(code **)(param_2 + 4);
  if (*(byte *)(param_2 + 7) != 0xff) {
    if (0xfd < *(byte *)(param_2 + 7)) {
      (**(code **)((int)(short)pcVar1 + *param_1))();
      return;
    }
    (*pcVar1)(param_1,ppOVar2);
    return;
  }
  FUN_0040fc50(param_3,*(OLECHAR **)((int)param_1 + ((uint)pcVar1 & 0xffffff)));
  return;
}

