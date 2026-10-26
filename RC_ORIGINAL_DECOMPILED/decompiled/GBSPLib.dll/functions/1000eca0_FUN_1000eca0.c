/*
 * FUN_1000eca0 at 1000eca0
 * undefined FUN_1000eca0(void)
 * Address ranges: 1000eca0-1000ece8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000eca0(int param_1,int param_2,int param_3)

{
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) == 0)) {
    *(int *)(param_1 + 4) = param_2;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x34);
    *(int *)(param_2 + 0x34) = param_1;
    *(int *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_3 + 0x34);
    *(int *)(param_3 + 0x34) = param_1;
    return 1;
  }
  (*DAT_1014e358)(s_LinkPortal__Portal_allready_look_10039034);
  return 0;
}

