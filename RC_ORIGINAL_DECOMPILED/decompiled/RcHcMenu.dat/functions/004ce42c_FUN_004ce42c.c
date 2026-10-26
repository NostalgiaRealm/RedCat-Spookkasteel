/*
 * FUN_004ce42c at 004ce42c
 * undefined __register FUN_004ce42c(int * param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 004ce42c-004ce56f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ce42c(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_25c;
  undefined4 uStack_248;
  undefined1 *puStack_244;
  undefined1 *puStack_240;
  byte local_23c [256];
  int local_13c;
  byte local_138 [256];
  int local_38;
  int local_34;
  undefined4 *local_30;
  byte local_2c [31];
  char local_d;
  int *local_c;
  int *local_8;
  
  puStack_240 = &stack0xfffffffc;
  local_34 = 0;
  local_38 = 0;
  local_13c = 0;
  local_30 = (undefined4 *)0x0;
  puStack_244 = &LAB_004ce570;
  uStack_248 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_248;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0(param_2);
  local_d = '\x01';
  bVar1 = FUN_00491e60((int)local_8,local_2c);
  if (bVar1) {
    do {
      uVar3 = FUN_004917c4(local_8,local_2c);
      if ((char)uVar3 != '\0') {
        if (local_d == '\0') {
          FUN_00404038(local_c,(undefined4 *)&DAT_004ce584);
        }
        else {
          local_d = '\0';
        }
        FUN_0049145c(local_8,local_2c,(int *)&local_30);
        FUN_00404038(local_c,local_30);
      }
      cVar2 = FUN_00491eac((int)local_8,local_2c);
    } while (cVar2 != '\0');
  }
  if (local_d != '\0') {
    FUN_00402fe0(**(int **)(param_4 + -4),local_138);
    FUN_00403fd4(&local_38,local_138);
    FUN_00402fe0(*local_8,local_23c);
    FUN_00403fd4(&local_13c,local_23c);
    pcStack_25c = " must contain properties";
    FUN_004040f0(&local_34,5);
    FUN_00403d94(local_34);
  }
  *in_FS_OFFSET = pcStack_25c;
  FUN_00403db0(&local_13c);
  FUN_00403dd4(&local_38,3);
  return;
}

