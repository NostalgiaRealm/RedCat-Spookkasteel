/*
 * FUN_005e6890 at 005e6890
 * undefined FUN_005e6890(void)
 * Address ranges: 005e6890-005e6a08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_005e6890(int param_1,int param_2,char *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined1 *param_6)

{
  void **ppvVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  char *_Str2;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00646920;
  pvStack_c = ExceptionList;
  piVar6 = *(int **)(param_1 + 4);
  ExceptionList = &pvStack_c;
  ppvVar1 = &pvStack_c;
  if (piVar6 != *(int **)(param_1 + 8)) {
    do {
      _Str2 = &DAT_006b3f70;
      pcVar3 = (char *)(**(code **)(*(int *)*piVar6 + 8))();
      iVar4 = __strcmpi(pcVar3,_Str2);
      if (iVar4 == 0) {
        pcVar3 = *(char **)(*piVar6 + 8);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "";
        }
        iVar4 = __strcmpi(param_3,pcVar3);
        if (iVar4 == 0) {
          if (param_2 == ((int *)*piVar6)[5]) {
            uVar5 = (**(code **)(*(int *)*piVar6 + 0xc))();
            *param_4 = uVar5;
            if (param_5 != (undefined4 *)0x0) {
              uVar5 = (**(code **)(*(int *)*piVar6 + 0x10))();
              *param_5 = uVar5;
            }
            if (param_6 == (undefined1 *)0x0) {
              ExceptionList = pvStack_c;
              return;
            }
            *param_6 = *(undefined1 *)(*piVar6 + 0x18);
            ExceptionList = pvStack_c;
            return;
          }
          uVar5 = FUN_005e7110(auStack_2c,s_Item_has_wrong_type___s_006b0f74,param_3);
          uStack_4 = 0;
          FUN_005ea780(0x138a,uVar5,param_3);
          if (iStack_28 == 0) {
            ExceptionList = pvStack_c;
            return;
          }
          pcVar3 = (char *)(iStack_28 + -1);
          cVar2 = *(char *)(iStack_28 + -1);
          if ((cVar2 == '\0') || (cVar2 == -1)) goto LAB_005e69ec;
          goto LAB_005e6946;
        }
      }
      piVar6 = piVar6 + 1;
      ppvVar1 = ExceptionList;
    } while (piVar6 != *(int **)(param_1 + 8));
  }
  ExceptionList = ppvVar1;
  uVar5 = FUN_005e7110(local_1c,s_Item_not_found___s_006b0f8c,param_3);
  uStack_4 = 1;
  FUN_005ea780(0x1389,uVar5,param_3);
  if (iStack_18 != 0) {
    pcVar3 = (char *)(iStack_18 + -1);
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 != '\0') && (cVar2 != -1)) {
LAB_005e6946:
      *pcVar3 = cVar2 + -1;
      ExceptionList = pvStack_c;
      return;
    }
LAB_005e69ec:
    FUN_005fe5f0(pcVar3);
  }
  ExceptionList = pvStack_c;
  return;
}

