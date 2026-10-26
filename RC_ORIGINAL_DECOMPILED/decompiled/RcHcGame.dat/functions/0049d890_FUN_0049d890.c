/*
 * FUN_0049d890 at 0049d890
 * undefined FUN_0049d890(void)
 * Address ranges: 0049d890-0049d9cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0049d890(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 local_38 [28];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  param_1[0xa1] = param_1[0xa1] + 1;
  if ((char)param_1[0x85] != '\0') {
    if (param_1[0x87] != 0) {
      iVar1 = param_1[0x88];
      bVar3 = true;
      if (iVar1 != -1) {
        iVar2 = param_1[0x89];
        if (iVar2 == -1) {
          param_1[0x8a] = 0x3f800000;
          param_1[0x89] = iVar1 + param_2;
        }
        else if (iVar2 < param_2) {
          param_1[0x8a] = 0;
          bVar3 = false;
        }
        else if (iVar1 < 1) {
          param_1[0x8a] = 0;
        }
        else {
          param_1[0x8a] = (int)((float)(iVar2 - param_2) / (float)iVar1);
        }
      }
      *(bool *)(param_1 + 0x8b) = bVar3;
      if (bVar3) goto LAB_0049d959;
    }
    FUN_0049d5f0(param_2,param_3);
    FUN_004041b0(param_1[0x87]);
    FUN_0049d5e0(0);
  }
LAB_0049d959:
  if (*(char *)(param_1[0x42] + 0x144) != '\0') {
    FUN_004a6c30(param_2,param_3);
    FUN_0049d310(local_38);
    iVar1 = param_1[0x42];
    local_1c = *(undefined4 *)(iVar1 + 0x24);
    local_18 = *(undefined4 *)(iVar1 + 0x28);
    local_14 = *(undefined4 *)(iVar1 + 0x2c);
    FUN_0049d480(local_38);
  }
  (**(code **)(*param_1 + 0x70))(param_2,param_3);
  if ((char)param_1[0x8f] != '\0') {
    (**(code **)(*param_1 + 0x54))(param_3);
  }
  FUN_0049eb00();
  return;
}

