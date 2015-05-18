#ifndef _DISS_COUNTER_H_INCLUDED_
#define _DISS_COUNTER_H_INCLUDED_

typedef double (*diss_counter_prob_f)(void *, unsigned, void *);
typedef void (*diss_counter_iter_f)(void *, unsigned *, double, void *);

struct diss_counter;

struct diss_counter *diss_counter_make(void *, unsigned, unsigned,
    diss_counter_prob_f, void *);
void diss_counter_destroy(struct diss_counter *);
void *diss_counter_next(struct diss_counter *);
unsigned diss_counter_n(const struct diss_counter *);
void diss_counter_reset_counts(struct diss_counter *, unsigned);
void diss_counter_set_counts(struct diss_counter *, unsigned *);
void *diss_counter_get_data(struct diss_counter *);
void *diss_counter_get_elem(struct diss_counter *, unsigned);
void diss_counter_iter(struct diss_counter *, diss_counter_iter_f);
void diss_counter_set_prob_fun(struct diss_counter *, diss_counter_prob_f);

#endif