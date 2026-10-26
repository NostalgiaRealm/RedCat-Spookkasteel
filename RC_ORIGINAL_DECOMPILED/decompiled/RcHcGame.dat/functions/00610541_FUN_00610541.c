/*
 * FUN_00610541 at 00610541
 * undefined FUN_00610541(void)
 * Address ranges: 00610541-006105db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00610541(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  
  DAT_0071001c = (int *)FUN_0061d4a8(*param_1);
  DAT_00710024 = DAT_0071001c[1] + -1;
  pcVar1 = (char *)((uint)(*DAT_0071001c == 0x2d) + param_2);
  FUN_0061d431(pcVar1,param_3,DAT_0071001c);
  DAT_00710028 = DAT_00710024 < DAT_0071001c[1] + -1;
  DAT_00710024 = DAT_0071001c[1] + -1;
  if ((DAT_00710024 < -4) || (param_3 <= DAT_00710024)) {
    FUN_006105dc(param_1,param_2,param_3,param_4);
  }
  else {
    if ((bool)DAT_00710028) {
      do {
        pcVar2 = pcVar1;
        pcVar1 = pcVar2 + 1;
      } while (*pcVar2 != '\0');
      pcVar2[-1] = '\0';
    }
    FUN_00610603(param_1,param_2,param_3);
  }
  return;
}

