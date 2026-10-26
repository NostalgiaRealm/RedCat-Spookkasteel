/*
 * FUN_0053eebc at 0053eebc
 * undefined __register FUN_0053eebc(int * param_1, int * param_2)
 * Address ranges: 0053eebc-0053f0e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053eebc(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_150;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined1 *puStack_13c;
  int local_138;
  int local_134;
  byte local_130 [256];
  int local_30;
  int local_2c;
  undefined4 local_28 [7];
  int *local_c;
  int *local_8;
  
  puStack_13c = &stack0xfffffffc;
  local_134 = 0;
  local_138 = 0;
  local_2c = 0;
  local_30 = 0;
  puStack_140 = &LAB_0053f0e7;
  uStack_144 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_144;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_0053eb9c((int)param_1);
  if ((char)uVar1 != '\0') {
    FUN_00402fe0(*local_8,local_130);
    FUN_00403fd4(&local_30,local_130);
    pcStack_150 = "AppObjDesc can only be assigned if not Active.";
    FUN_004040f0(&local_2c,3);
    FUN_00403d94(local_2c);
  }
  if ((int *)local_8[0x84] != local_c) {
    local_8[0x84] = (int)local_c;
    if (local_c == (int *)0x0) {
      FUN_00403094((int *)local_8[0xf1]);
      local_8[0xf1] = 0;
    }
    if (local_8[0xf0] == 0) {
      piVar2 = FUN_00496f60((int *)&DAT_0048e950,'\x01',(int)local_c,0,(undefined4 *)"Intern");
      local_8[0xf0] = (int)piVar2;
      iVar3 = FUN_0049278c(local_c);
      FUN_0049708c(local_8[0xf0],iVar3);
      iVar3 = FUN_0048ec24(*(int *)(local_8[0xf0] + 0x10));
      if (iVar3 < 1) {
        FUN_00402fe0(*local_8,local_130);
        FUN_00403fd4(&local_138,local_130);
        FUN_004040f0(&local_134,3);
        FUN_00403d94(local_134);
      }
      FUN_0048f02c(*(int **)(local_8[0xf0] + 0x10),0,local_28);
      (**(code **)(**(int **)(local_8[0xf0] + 0x10) + 4))();
      (**(code **)(**(int **)(local_8[0xf0] + 0x10) + 0xc))
                (*(int **)(local_8[0xf0] + 0x10),local_28);
      iVar3 = FUN_0048ec24(local_8[0xef]);
      if (iVar3 == 0) {
        (**(code **)(*(int *)local_8[0xef] + 8))
                  ((int *)local_8[0xef],*(undefined4 *)(local_8[0xf0] + 0x10));
      }
    }
    if (local_c == (int *)0x0) {
      FUN_00403094((int *)local_8[0xf0]);
      local_8[0xf0] = 0;
    }
  }
  *in_FS_OFFSET = pcStack_150;
  FUN_00403dd4(&local_138,2);
  FUN_00403dd4(&local_30,2);
  return;
}

