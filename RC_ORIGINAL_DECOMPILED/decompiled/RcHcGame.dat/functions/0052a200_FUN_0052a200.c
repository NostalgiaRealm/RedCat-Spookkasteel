/*
 * FUN_0052a200 at 0052a200
 * undefined FUN_0052a200(void)
 * Address ranges: 0052a200-0052a241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052a200(int param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  iVar2 = FUN_0060b449(puVar1,s_Level_d_006a0240,&param_1);
  if (iVar2 == 1) {
    *param_2 = param_1;
    return 1;
  }
  *param_2 = -1;
  return 0;
}

