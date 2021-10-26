# greedy algorithm

# sort jobs according to profits
# initialise result sequence with time slots
# add jobs within deadline

def job_sequencer(jobs):
    n=len(jobs)
    for i in range(n):
        for j in range (n-1):
            if jobs[j][2]<jobs[j+1][2]:
                jobs[j+1],jobs[j] = jobs[j],jobs[j+1]  # descending sort
    print(jobs)

# initialize time slots
    t=max(jobs, key= lambda job: job[1])[1]
    result=t*[-1]

    for i in range(n):
        for k in range(jobs[i][1]-1,-1,-1):
            if result[k]==-1:
                result.pop(k)
                result.insert(k, jobs[i][0])
                break

    return result


jobs = [['a',2,100],['b',1,19],['c',2,27],['d',1,25],['e',3,15]]

print(job_sequencer(jobs))